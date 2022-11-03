#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata(void)
    {
        cout << "The Id of the item is " << id << endl;
        cout << "The price of the item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int i,j,p;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the id and price of the item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        p++;
    }
    for (j = 0; j < size; j++)
    {

        cout << "Item number " << j + 1 << endl;
        ptrTemp->getdata();
    }
        ptrTemp++;
    return 0;
}