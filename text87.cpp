#include<iostream>
using namespace std;
template<class T>
class Vector
{
    public:
 T *arr;
 int size;

 Vector(int m)
 {
   size = m;
   arr = new T[size]; 
 }
  T dotProduct(Vector &v)
  {
  T d = 0; 
  for(int i = 0; i<size ;i++)
  {
    d += this->arr[i] * v.arr[i]; 
  }
  return d;
  }

};
int main()
{
    // Vector <int> v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 2;

    // Vector <int> v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;

Vector <float> v1(3);
    v1.arr[0] = 4.3;
    v1.arr[1] = 3.2;
    v1.arr[2] = 2.09;

    Vector <float> v2(3);
    v2.arr[0] = 1.2;
    v2.arr[1] = 1.03;
    v2.arr[2] = 1.2;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;

  return 0;
}