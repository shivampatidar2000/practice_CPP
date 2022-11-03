#include <iostream>
using namespace std;

// ambigutiuos sovle this type
class Base1
{
public:
    void greet()
    {
        cout << " How are you " << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << " May i now your name plase " << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 ::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello Programmer " << endl;
    }
};
class D : public B
{
public:
    // void say()
    // {
    //     cout << "Hello raja babu " << endl;
    // }
};
int main()
{
    // // ambugities 1
    // Base1 v1;
    // Base2 v2;
    // v1.greet();
    // v2.greet();

    // Derived b1;
    // b1.greet();

    // // ambugities 2

    B b1;
    b1.say();
    D d1;
    d1.say();
    return 0;
}