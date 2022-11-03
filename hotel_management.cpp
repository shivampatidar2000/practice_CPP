#include <iostream>
using namespace std;
int main()
{
    int quant;
    int choise;
    // Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    // food item sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    // total proce of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout << "\n\t Quantity of items we have ";
    cout << "\n Rooms Avaliabe :";
    cin >> Qrooms;
    cout << "\n Quantity of pasta :";
    cin >> Qpasta;
    cout << "\n Quantity of burger :";
    cin >> Qburger;
    cout << "\n Quantity of shake :";
    cin >> Qshake;
    cout << "\n Quantity of noodles :";
    cin >> Qnoodles;
    cout << "\n Quantity of chicken :";
    cin >> Qchicken;

m:
    cout << "\n\t\t\t please select from the menu option ";
    cout << "\n\n1) Rooms ";
    cout << "\n2) pasta";
    cout << "\n3) Burger";
    cout << "\n4) Noodles";
    cout << "\n5) shake";
    cout << "\n6) chicken-roll";
    cout << "\n7) Information regarding sales and collection ";
    cout << "\n8) Exit";

    cout << "\n\n please Enter Your choise ";
    cin >> choise;

    switch (choise)
    {
    case 1:
        cout << "\n\n Enter the number of rooms you want: ";
        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + (quant * 1200);
            cout << "\n\n\t\t" << quant << "room/rooms have been alloted to you! ";
        }
        else
        {
            cout << "\n\tOnly " << Qrooms - Srooms << "Rooms remaining in hotel ";
        }
        break;

    case 2:
        cout << "Enter the pasta Quantity ";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + (quant * 250);
            cout << "\n\n\t\t" << quant << " pasta is the order! ";
        }
        else
        {
            cout << "\n\tOnly " << Qpasta - Spasta << "Pasta remaining in hotel ";
        }
        break;

    case 3:
        cout << "Enter the burger Quantity ";
        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            Total_burger = Total_burger + (quant * 120);
            cout << "\n\n\t\t" << quant << " burger is the order! ";
        }
        else
        {
            cout << "\n\tOnly " << Qburger - Sburger << "Burger remaining in hotel ";
        }
        break;
    case 4:
        cout << "Enter the noodles Quantity ";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;
            Total_noodles = Total_noodles + (quant * 140);
            cout << "\n\n\t\t" << quant << " noodles is the order! ";
        }
        else
        {
            cout << "\n\tOnly " << Qnoodles - Snoodles << "noodles remaining in hotel ";
        }
        break;
    case 5:
        cout << "Enter the shake Quantity ";
        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            Total_shake = Total_shake + (quant * 120);
            cout << "\n\n\t\t" << quant << " Shake is the order! ";
        }
        else
        {
            cout << "\n\tOnly " << Qshake - Sshake << "Shake remaining in hotel ";
        }
        break;
    case 6:
        cout << "Enter the chicken-roll Quantity ";
        cin >> quant;
        if (Qchicken - Schicken >= quant)
        {
            Schicken = Schicken + quant;
            Total_chicken = Total_chicken + quant * 150;
            cout << "\n\n\t\t" << quant << " Chicken-roll is the order! ";
        }
        else
        {
            cout << "\n\tOnly " << Qchicken - Schicken << "Chicken-roll remaining in hotel ";
        }
        break;
    case 7:
        cout << "\n\t\tDetails of sales and collection ";
        cout << "\n\n Number of room we had : " << Qrooms;
        cout << "\n\n Number of room we gave for rent " << Srooms;
        cout << "\n\n Ramaining rooms : " << Qrooms - Srooms;
        cout << "\n\n Total rooms collection for the day : " << Total_rooms;

        cout << "\n\n Number of pasta we had : " << Qpasta;
        cout << "\n\n Number of pasta we sold " << Spasta;
        cout << "\n\n Ramaining pastas : " << Qpasta - Spasta;
        cout << "\n\n Total pastas collection for the day : " << Total_pasta;

        cout << "\n\n Number of burger we had : " << Qburger;
        cout << "\n\n Number of burger we sold " << Sburger;
        cout << "\n\n Ramaining burgers : " << Qburger - Sburger;
        cout << "\n\n Total burgers collection for the day : " << Total_burger;

        cout << "\n\n Number of noodles we had : " << Qnoodles;
        cout << "\n\n Number of noodles we sold " << Snoodles;
        cout << "\n\n Ramaining noodles : " << Qnoodles - Snoodles;
        cout << "\n\n Total noodles collection for the day : " << Total_noodles;

        cout << "\n\n Number of shake we had : " << Qshake;
        cout << "\n\n Number of shake we sold " << Sshake;
        cout << "\n\n Ramaining shakes : " << Qshake - Sshake;
        cout << "\n\n Total shakes collection for the day : " << Total_shake;

        cout << "\n\n Number of chicken-roll we had : " << Qchicken;
        cout << "\n\n Number of chicken-roll we sold " << Schicken;
        cout << "\n\n Ramaining chickens-roll : " << Qchicken - Schicken;
        cout << "\n\n Total chickens-roll collection for the day : " << Total_chicken;
        cout << "\n\n\n Total collection for the day : " << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;
        cout << "\n";
        break;
    case 8:
        exit(0);
        break;
    default:
        cout << "Please select the numbers of mentioned above!";
    }
    goto m;
}