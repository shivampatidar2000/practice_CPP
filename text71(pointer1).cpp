
// There are 3 ways to pass C++ arguments to a function:

// call-by-value
// call-by-reference with pointer argument
// call-by-reference with reference argument



#include<iostream>
using namespace std;

// call-by-value
 int square(int n)
 {
        //Address of n in square1() is not the same as n1 in main()

    cout<<"Address of n1 is square(): "<<&n<<endl;
        // clone modified inside the function

    n *=n;
    return n;
 }

// call-by-reference with pointer argument

 void square2(int *n)
 {
        //Address of n in square2() is  same as n2 in main()

    cout<<"Address of n2 is square2(): "<<n<<endl;

        // Explicit de-referencing to get the value pointed-to 
    *n *= *n;

 }

// call-by-reference with reference argument

 void square3(int &n)
 {
        //Address of n in square3() is the same as n3 in main()

   cout<<"address of n3 is square3(): "<<&n<<endl;

       // Implicit de-referencing (without '*')
     n *= n;

 }

 void geeks()
 {
        //Call-by-Value
      int n1 = 8;
      cout<<"The address of n1 in main() "<<&n1<<endl;
      cout<<"square of n1 "<<square(n1);
      cout << "No change in n1: " << n1 << "\n";

          //Call-by-Reference with Pointer Arguments
     int n2= 8;
     cout<<"The address of n2 in main()"<<&n2<<endl;
         square2(&n2);
     cout<<"square2 of n2 "<<n2<<endl;
     cout << "Change reflected in n2: " << n2 << "\n";

     int n3 = 8;
     cout<<"The address of n3 in main()"<<&n3<<endl;
         square3(n3);

     cout<<" square3 of n3 "<<n3<<endl;
     cout<<" change reference in n3: "<<n3<<endl;


 
 }
int main()
{
  geeks();
  return 0;
}