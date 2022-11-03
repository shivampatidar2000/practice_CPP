#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    float salary;

public:
    // void getdata(int a, float b)
    // {
    //     id = a;
    //     salary = b;
    // }
    Employee(){}
    Employee(int a)
    {
        id = a;
        salary = 35.2;
    }
    void setdata()
    {
        cout << "The id of the employee is " << id << " and salary is " << salary << endl;
    }
};

// derived class
class Programmer : public Employee
{
public:
  int language = 9;
    // void getNum(int a1, float a2)
    // {
    //     id = a1;
    //     salary = a2;
    // }
    // Programmer(){}
    Programmer(int a1 ,float a2){
       id = a1;
       salary = a2;
    }
    void display()
    {
        cout << "The id of the programmer is " << id << " and salary is " << salary << endl;
    }
};
int main()
{
    Employee rohan(1);
    rohan.setdata();

    Programmer ram(2, 4567);
    cout<<ram.language<<endl;
    // ram.display();
    return 0;
}