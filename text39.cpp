#include<iostream>
#include<string>
using namespace std;

class Shop
{
 int itemId[100];
 int itemPrice[100];
 int counter;
 public:
 void inticounter(void) { counter = 0;};
 void setPrice();
 void displayPrice();
};
 void Shop ::setPrice(){
    cout<<"Enter Id of your item no: "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your Item "<<endl;
    cin>>itemPrice[counter];
    counter++;
 }
 void Shop :: displayPrice(void){
    for (int i=0; i<counter ;i++)
    {
      cout<< "The price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
 }


int main()
{
    Shop dukan;
    dukan.inticounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();

  return 0;
}