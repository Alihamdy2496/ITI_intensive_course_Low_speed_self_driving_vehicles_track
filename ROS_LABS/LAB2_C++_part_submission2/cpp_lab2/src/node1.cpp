#include <chrono>
#include <stdlib.h>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class Node1 : public rclcpp::Node
{
public:
    Node1():Node("string_publisher")
    {
        string_publisher_ = this->create_publisher<std_msgs::msg::String>("str_topic",10);
        timer_ = this->create_wall_timer(std::chrono::milliseconds(1000), std::bind(&Node1::timer_cb, this) );
        
    }
private:
    void timer_cb()
    {
        std_msgs::msg::String string_msg = std_msgs::msg::String();
        string_msg.data = std::to_string(counter);
        RCLCPP_INFO(this->get_logger(),string_msg.data);
        string_publisher_->publish(string_msg);
        counter++;
    }
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr string_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    int counter = 0;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<Node1>());
    rclcpp::shutdown();
    return 0;
} 
