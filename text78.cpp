#include <iostream>
using namespace std;
class CWH  // Abstract Base class -> Abstract Base class is a class that is designed to be 
//spacifically used as a base class. An Abstract Base class contains at least one pure virtual function. 
{
protected:
  string title;
  float rating;

public:
  CWH(string s, float r)
  {
    title = s;
    rating = r;
  }
  virtual void display()= 0; //Pure virtual function  //{ cout << "Cell the Base class\n"; }
};

class CWVideo : public CWH
{
  float VideoLength;

public:
  CWVideo(string s, float r, float vlen) : CWH(s, r)
  {
    VideoLength = vlen;
  }
  void display()
  {
    cout << "This is Amazing video with title " << title << endl;
    cout << "Rating : " << rating << " out of 5 stars " << endl;
    cout << "Length of the video is: " << VideoLength << endl;
  }
};

class CWText : public CWH
{
  int words;

public:
  CWText(string s, float r, int wd) : CWH(s, r)
  {
    words = wd;
  }
  void display()
  {
    cout << "This is Amazing Text with title " << title << endl;
    cout << "Rating : " << rating << " out of 5 stars " << endl;
    cout << "Length of the Text is: " << words << endl;
  }
};
int main()
{
  int word;
  float rating, videoLen;
  string title;

  title = "Django tutotial Video ";
  rating = 4.67;
  videoLen = 6.87;

  CWVideo dj(title, rating, videoLen);
  //   dj.display();

  title = "Django tutotial Text ";
  rating = 4.01;
  word = 322;
  CWText txdj(title, rating, word);
  // txdj.display();

  CWH *ptr[2];
  ptr[0] = &dj;
  ptr[1] = &txdj;
  ptr[0]->display();
  ptr[1]->display();

  return 0;
}

/* Rouls for Virtual class
1. Virtual Function Can not Be static Member Function.
2.They are accessed by object pointer.
3.Virtual function can be a friend of another class.
4. Virtual Function In Base class might not be used.
5. If a virtual function is defined a base class they is not necessity of redefining it
 int the derived class
*/