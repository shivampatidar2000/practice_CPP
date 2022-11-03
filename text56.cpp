#include<iostream>
using namespace std;

class Person
{
    protected:
    string name;
    int age;
    public:
    virtual void getdata(){}
    virtual void putdata(){}
};
class Professor : public Person
{
  int publication;
  static int id1;
  public:
  void getdata()
  {
    cin>>name;
    cin>>age;
    cin>>publication;
    int id1;
  }
  void putdata()
  {
    cout<<name<<" "<<age<<" "<<publication<<" "<<id1<<endl;
    id1++;
  }
};
int Professor :: id1 = 1;
 
 class Student : public Person
 {
    int marks[6];
    static int id2;
    public:
    int sum =0;
    void getdata()
    {
        cin>>name;
        cin>>age;
        for(int i = 0; i<=5; i++)
        {
             cout<<marks[i];
             sum = sum +marks[i];
        }
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<sum<<" "<<id2<<endl;
        id2++;
    }
 };
 int Student :: id2 = 1;
int main()
{
    int n,var;
    cin>>n;
    Person *per[n];
    for(int i =0; i<n; i++)
    {
        cin>>var;
        if(var == 1)
        {
            per[i]= new Professor;
        }
        else 
        per[i]= new Student;
        per[i]->getdata();
    }
    
    for(int i=0; i<n; i++)
    per[i]->putdata();
   
  return 0;
}