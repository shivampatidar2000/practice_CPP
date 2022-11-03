#include <fstream>
#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

void login();
void registration();
void forget();

int main()
{
    int choise;
    cout << "\t\t\t____________________________________\t\t\t\n\n";
    cout << "\t\t\t________WELCOME TO LOGIN PAGE________\t\t\t\n\n";
    cout << "\t\t\t_________________Menu________________\t\t\t\n\n";

    cout << "\t| Press 1 to lOGIN                     |\n";
    cout << "\t| Press 2 to REGISTER                  |\n";
    cout << "\t| Press 3 if you forget your PASSWORD  |\n";
    cout << "\t| Press 4 to EXIT                      |\n";
    cout << "\n\t\t\t Please enter your choise : ";
    cin >> choise;

    switch (choise)
    {
    case 1:
        login();
        break;
    case 2:
        registration();
        break;
    case 3:
        forget();
        break;
    case 4:
        cout << "\t\t\t ThankYou! \n\n ";
        break;

    default:
        system("clear");
        cout << "Please select from the options given above \n\n";
        main();
        // break;
    }

    // return 0;
}

void login()
{
    int count;
    string userId, password, id, pass;
    system("clear");
    cout << "Please Enter the UserName and Password : " << endl;
    cout << "\t\t\t USERNAME ";
    cin >> userId;
    cout << "\t\t\tPASSWORD ";
    cin >> password;

    ifstream input("records.txt");

    while (input >> id >> pass)
    {
        if (id == userId && pass == password)
        {
            count = 1;
            system("clear");
        }
    }
    input.close();
    if (count == 1)
    {
        cout << userId << "\n Your LOGIN is successfull \n Thanks for logging in ! \n";
        main();
    }
    else
    {
        cout << "LOGIN ERROR \n Please check your username and password \n";
        main();
    }
}

void registration()
{
    string ruserId, rpassword, rId, rpass;
    system("clear");

    cout << "Enter The username : ";
    cin >> ruserId;
    cout << "Enter the password : ";
    cin >> rpassword;

    ofstream f1("records.txt", ios::app);
    f1 << ruserId << ' ' << rpassword << endl;
    system("clear");

    cout << "\n\t\t\t Registration is Succesfull! \n";
    main();
}

void forget()
{
    int option;
    system("clear");
    cout << "\t\t\t you forget your password? no warries \n";
    cout << "Press 1 to search your id by username \n";
    cout << "Press 2 to go back to main menu " << endl;
    cout << "\t\t\t Enter your choice : ";
    cin >> option;

    switch (option)
    {
    case 1:
    {
        int count = 0;
        string suserId, sId, spass;
        cout << "Enter the username which you remembered : ";
        cin >> suserId;
        ifstream f2("records.txt");
        while (f2 >> sId >> spass)
        {
            if (sId == suserId)
            {
                count = 1;
            }
            f2.close();
        }
        if (count == 1)
        {
            cout << "\n\n Your Account is found! \n";
            cout << "\n\n your password is : " << spass << endl;
            main();
        }
        else
        {
            cout << "\n\t Sorry! your account is not found \n";
            main();
        }
        break;
    }
    case 2:
    {
        main();
    }
    default:
    {
        cout << "\t\t\t wrong choice ! Please try again " << endl;
        forget();
    }
    break;
    }
}