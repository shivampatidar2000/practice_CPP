#include<iostream>
#include<cmath>
using namespace std;

class Point {
    int a ,b;
    friend void distance(Point , Point);
    public:
    Point(int x,int y)
    {
        a =x;
        b =y;
    }
    void displayPoint(void)
    {
        cout<<"The point of ("<<a<<","<<b<<")"<<endl;
    }
};
void distance(Point p1 ,Point p2)
{
    int a_diff = (p2.a-p1.a);
    int b_diff = (p2.b-p1.b);
    int diff = sqrt(pow(a_diff,2)+pow(b_diff,2));
    cout<< "The Diffreance is: "<<diff<<endl;

}
int main()
{
  Point p(9,5);
  Point q(4,6);
  
  Point c(4,7);
  Point d(4,6);



  distance(p,q);
  distance(c,d);

  p.displayPoint();

  q.displayPoint();
  return 0;
}