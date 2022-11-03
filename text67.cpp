
#include<iostream>
using namespace std;
class Student
{
    protected:
   int roll_number;
    public:
    void set_number(int a)
    {
        roll_number = a;
    }
    void print_number()
    {
    cout<<"Your roll Number is "<<roll_number<<endl;
    }
};
class Test : virtual public Student
{
    protected:
     float maths ;
     float physics;
    public:
     void set_marks(float a1, float a2)
     {
        maths = a1;
        physics = a2;
     }
     void print_marks()
     {
        cout<<"The marks is here: " <<endl
        << "Maths: "<<maths<<endl
        << "Physics: "<<physics<<endl;
     }
};

class Sport : virtual public Student
{
    protected:
     float score;
    public:
     void set_score(float sc)
     {
       score = sc;
     }
     void print_score()
     {
        cout<<"Sport score: "<<score<<endl;
     }
};
class Result : public Test ,public Sport
{
   private:
   float total;
   public:
   void display()
   {
    total = maths + physics + score;
    print_number();
    print_marks();
    print_score();
    cout<<"The total score is "<<total<<endl;
   }
};
int main()
{
   
   Result harry;
   harry.set_number(2);
   harry.set_marks( 98,89);
   harry.set_score(89);
   harry.display();
  return 0;
}

