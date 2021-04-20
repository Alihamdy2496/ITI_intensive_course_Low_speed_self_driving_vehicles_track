#include<iostream>
#include<climits>
using namespace std;
void Q_1 (void);
void Q_2 (void);
void Q_3 (void);
void Q_4 (void);
void Q_5 (void);
void Q_6 (void);
void Q_7 (void);

int main(void){

//Q_1();
//Q_2();
//Q_3();
//Q_4();
//Q_5();
//Q_6();
Q_7();

return 0;
}

void Q_1 (void){
    int num,favnum;
    cout << "Enter your your number between 1 and 100 : ";
    cin >> favnum;
    if(favnum>100 || favnum <0){cout << "Enter a number between 1 and 100 : "; return;}
    cout << "Enter a number : ";
    cin >> num;
    if(num>100 || num <0){cout << "Enter a number between 1 and 100 : "; return;}
    if(num==favnum){ cout << "Amazing!! that's my favorite number too !"; }
    else { cout << "not really!! "<<num<<" isn't my favorite number !"; }

}
void Q_2 (void)
{
    int count,newvar,num,temp_digit;
    cout <<"Enter a number :";
    cin >> num ;
    count=1;
    newvar=0;
    while(num>0)
    {
       temp_digit = num % 10;
       newvar = newvar * 10 + temp_digit ;
       num = num / 10;
    }
    cout<<"Reversed number :"<<newvar<<endl;
}
void Q_3 (void)
{
    int elements[5]={0};
    cout <<"Enter elements :";  
    for (int i =0;i<5;i++)
    {
        cin>>elements[i];
    }
    for (int i =0;i<5;i++)
    {
        cout<<*(elements+i)<<endl;
    }   

}
void Q_4 (void)
{
    int total;
    signed int max=INT_MIN;
    /*if max = max negative number then we don't have to handle reading an element 1st
    * and make it the max and then enter the loop*/
    cout <<"Enter total number of elements 1 to 100 : ";
    cin >> total;
    if(total>100 ){cout << "Enter a number between 1 and 100 : "; return;}
    int arr[total]={0};
    /*arrays uses static allocation so this line is wrong synatx in c and older versions 
    * of C++ but this is possible from c++11 and above allowed dynamic allocations with arrays*/
    for(int i=1;i<=total;i++)
    {
       cout<<"Enter number "<<i<<" :";
       cin >> arr[i];
       if(max<arr[i]){max=arr[i];}
    }
    cout<<"largest element :"<<max<<endl;

}
void Q_5 (void)
{
    int num,temp;
    float avg;
    cout <<"Enter the number of data : ";
    cin >> num;
    for(int i=0;i<num;i++)
    {
        cout <<i<<" - Enter number : ";
        cin >> temp;
        avg+= temp;
    }
    avg=avg/num;
    cout <<"Average = "<<avg<<endl;
}
class Q_6_class{
    public:
    int num1,num2;
    Q_6_class(){}
    Q_6_class(int x,int y){
        num1=x;
        num2=y;
    }
    void add(void){        
        cout<<"numbers initalized "<<endl;
        cout<<"the addition result on : "<<num1+num2<<endl;
        }
};
void Q_6 (void)
{
    int number1,number2;
    cout <<"Enter first number : ";
    cin >> number1;   
    cout <<"Enter second number : ";
    cin >> number2; 
    Q_6_class class_object(number1,number1);
    class_object.add();
}
class Q_7_class{
    public:
    int real,imag;
    Q_7_class(){}
    Q_7_class(int x,int y){
        real=x;
        imag=y;
    }
    void add_complex(Q_7_class num){        
        cout<<"the sum of the real parts is "<< real + num.real <<endl;
        cout<<"the sum of the imaginary parts is "<< imag + num.imag <<endl;
        }
};
void Q_7 (void)
{
    int x,y;
    cout<<"First number"<<endl<<"enter the real number: ";
    cin>>x;
    cout<<"enter the imaginary number: ";
    cin>>y;    
    Q_7_class num1 (x,y);
    cout<<"second number"<<endl<<"enter the real number: ";
    cin>>x;
    cout<<"enter the imaginary number: ";
    cin>>y;    
    Q_7_class num2 (x,y);
    
    num2.add_complex(num1);

}
