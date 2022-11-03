#include <iostream>
using namespace std;
// multilevel  inheritance
// Base class
class Student
{
protected:
    int roll_Number;

public:
    void setRollNumber(int);
    void getRollNumber();
};
void Student ::setRollNumber(int r)
{
    roll_Number = r;
}
void Student ::getRollNumber()
{
    cout << "The roll number is " << roll_Number << endl;
}
//  derived class form student class
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks();
};
void Exam ::setMarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::getMarks()
{
    cout << "The marks of maths is " << maths << endl;
    cout << "The marks of Physics is " << physics << endl;
}
// derived form exam class
class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        getRollNumber();
        getMarks();
        cout << "The percentage is " << (maths + physics) / 2 << endl;
    }
};
int main()
{
    Result shivam;
    shivam.setRollNumber(32);
    shivam.setMarks(92, 93);
    shivam.display();

    return 0;
}