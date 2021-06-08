#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "carkyo_msgs/msg/camera_emergency.hpp"
#include <pcl_conversions/pcl_conversions.h>
using namespace std;

class PointcloudFilter : public rclcpp::Node
{
  public:
    PointcloudFilter(): Node("perception_lab2")
    {  
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "perception_lab2 node has started");
      subscriber_ = this->create_subscription<sensor_msgs::msg::PointCloud2>("/intel/cropped", 10, std::bind(&PointcloudFilter::subscribe_message, this, std::placeholders::_1));
      publisher_ = this->create_publisher<carkyo_msgs::msg::CameraEmergency>("CameraEmergency", 10);
    }
  private:
    void subscribe_message(const sensor_msgs::msg::PointCloud2::SharedPtr message) const
    {
        auto size_var = message->data.size();
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "size_var = %ld",size_var);
        carkyo_msgs::msg::CameraEmergency msgg;
        if(size_var > 0){
          msgg.close_obstacle_detected=true;
          pcl::PCLPointCloud2 pcl_pc2;
          pcl_conversions::toPCL(*message,pcl_pc2);
          pcl::PointCloud<pcl::PointXYZ>::Ptr inputCloudI(new pcl::PointCloud<pcl::PointXYZ>);
          pcl::fromPCLPointCloud2(pcl_pc2,*inputCloudI);
          pcl::PointCloud<pcl::PointXYZ>::Ptr inputCloudII (new pcl::PointCloud<pcl::PointXYZ>);

          msgg.min_distance=inputCloudI->points[0].z;

          for (size_t i = 0; i < inputCloudI->points.size(); i++){
              float x = inputCloudI->points[i].x;
              float y = inputCloudI->points[i].y;
              float z = inputCloudI->points[i].z;
              if(z >  msgg.min_distance){
                 msgg.min_distance=z;
              }
                inputCloudII->push_back (pcl::PointXYZ (x, y, z));
          }
          publisher_->publish(msgg);   
        }
        else{
          msgg.close_obstacle_detected=false;
          msgg.min_distance=-1;
          publisher_->publish(msgg);   
        }
    }
    rclcpp::Node::SharedPtr nh_;
    rclcpp::Publisher<carkyo_msgs::msg::CameraEmergency>::SharedPtr publisher_;        
    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr subscriber_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PointcloudFilter>());
  rclcpp::shutdown();
  return 0;
}
