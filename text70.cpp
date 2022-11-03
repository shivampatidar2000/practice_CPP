#include <iostream>
using namespace std;

class Base1
{
    int dat1;

public:
    Base1()
    {
        cout << "Enter the dat1 value " << endl;
        cin >> dat1;
    }
    void printdataBase1()
    {
        cout << "The value of base1 in dat1 is " << dat1 << endl;
    }
};

class Base2
{
    int dat2;

public:
    Base2()
    {
        cout << "Enter the dat2 value " << endl;
        cin >> dat2;
    }
    void printdataBase2()
    {
        cout << "The value of base2 in dat2 is " << dat2 << endl;
    }
};
class Derived : public Base1, public Base2
{
    int deri1, deri2;

public:
    Derived() : Base1(), Base2()
    {
        cout << "Enter the derived1 value " << endl;
        cin >> deri1;
        cout << "Enter the derived2 value " << endl;
        cin >> deri2;
    }

    void printdataDerived()
    {
        cout << "The value of derived1 is " << deri1 << endl;
        cout << "The value of derived2 is " << deri2 << endl;
    }
};
int main()
{
    Derived ram;
    ram.printdataBase1();
    ram.printdataBase2();
    ram.printdataDerived();

    return 0;
}