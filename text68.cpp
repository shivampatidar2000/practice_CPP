
#include <iostream>
#include <math.h>
using namespace std;
class SimpleCalculater
{
    int num1;
    int num2;

public:
    void getdata()
    {
        // num1 = a1;
        cout<<"Ener the value of num1 "<<endl;
        cin>>num1;
        cout<<"Ener the value of num2 "<<endl;
        cin>>num2;
        // num2 = a2;
    }
    void setdata()
    {
        cout << "The value of addition num1 and num2 is " << num1 + num2 << endl;
        cout << "The value of subtration num1 and num2 is " << num1 - num2 << endl;
        cout << "The value of multiplication num1 and num2 is " << num1 * num2 << endl;
        cout << "The value of division num1 and num2 is " << num1 / num2 << endl<<endl;
    }
};

class ScientificCalculater
{
    int num3;
    int num4;

public:
    void getNumber()
    {
         // num1 = a1;
        cout<<"Ener the value of num1 "<<endl;
        cin>>num3;
        cout<<"Ener the value of num2 "<<endl;
        cin>>num3;
    }
    void display()
    {
        cout << "This is ScientificCalculater called " << endl;
        cout << "The num3 raised to the power num4 " << pow(num3, num4) << endl;
        cout << "The num4 raised to the power num3 " << pow(num4, num3) << endl;
        cout << "The num3 Square is " << sqrt(num3) << endl;
        cout << "The num4 Square is " << sqrt(num4) << endl;
        cout << "The num4 cos is " << cos(num4) << endl;
        cout << "The num3 sin is " << sin(num3) << endl<<endl;
    }
};

class HybridCalculater : public SimpleCalculater, public ScientificCalculater
{
public:
    void show()
    {
        // setdata();
        // display();
        // cout << "This is HybridCalculater called " << endl;
        // cout << "The value of num1 is " << num1 << endl;
        // cout << "The value of num2 is " << num2 << endl;
        // cout << "The value of num3 is " << num3 << endl;
        // cout << "The value of num4 is " << num4 << endl<<endl;
    }
};
int main()
{
    HybridCalculater cal;
    cal.getdata();
    cal.setdata();
    cal.getNumber();
    cal.display();
    // cal.show();

    return 0;
}