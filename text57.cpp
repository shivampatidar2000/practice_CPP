#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class HotelRoom
{
private:
    int bedrooms;
    int bathrooms;

public:
    HotelRoom(int bedroom, int bathroom)
        : bedrooms(bedroom), bathrooms(bathroom) {}
    int getPrice()
    {
        return 50 * bedrooms + 100 * bathrooms;
    }
};

class HotelApartment : public HotelRoom
{
public:
    HotelApartment(int bedroom, int bathroom)
        : HotelRoom(bedroom + 2, bathroom) {}
    int getPrice()
    {
        return HotelRoom::getPrice() + 100;
    }
};
int main()
{

    int n;
    cout << "Enter the value of n ";
    cin >> n;
    vector<HotelRoom *> rooms;
    for (int i = 0; i < n; i++)
    {
        string room_type;
        int bathrooms;
        int bedrooms;
        cout<<"Room_type , Bedrooms, Bathrooms \n";
        cin >> room_type >> bedrooms >> bathrooms;

        if (room_type == "standard")
            rooms.push_back(new HotelRoom(bedrooms, bathrooms));
        else
            rooms.push_back(new HotelRoom(bathrooms, bedrooms));
    }
    int total_profit = 0;
    for (auto room : rooms)
    {
        total_profit += room->getPrice();
    }
    cout << total_profit << endl;
    for (auto room : rooms)
    {
        delete room;
    }
    rooms.clear();

    return 0;
}