#include <iostream>
using namespace std;

class Animal
{
public:
    void animalsound()
    {
        cout << "The Animal make a sound \n";
    }
};
class Pig : public Animal
{
public:
    void animalsound()
    {
        cout << "The pig say: wee wee \n";
    }
};

class Dog : public Animal
{
public:
    void animalsound()
    {
        cout << "The Dog say: bow bow \n";
    }
};

int main()
{
    Animal myanimal;
    Pig mypig;
    Dog mydog;

    myanimal.animalsound();
    mypig.animalsound();
    mydog.animalsound();

    return 0;
}