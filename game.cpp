#include <iostream>
#include <string>  // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
using namespace std;
void rules();
int main()
{
    string playerName;
    int balance;
    int bettingAmount;
    int guess;
    int dice; // store the rendom number
    char choice;

    srand(time(0)); // seed the random generater
    cout << "\n\t\t========WELCOME TO CASINO WORLD========\n\n";
    cout << " \n\nWhat's your Name: ";
    cin >> playerName;
    cout << "Enter the starting balance to play game : $ ";
    cin >> balance;
    do
    {
        system("cls");
        rules();
        cout << "\n\nYou current blance is $ " << balance << "\n";
        // "get player's betting blance"
        do
        {
            cout << "hey, " << playerName << ", Enter amount to bet : $";
            cin >> bettingAmount;
            if (bettingAmount > balance)
                cout << " Betting blance can't more than current balance!\n"
                     << "\nRe-enter balance\n ";
        } while (bettingAmount > balance);
        // gets player's numbers
        do
        {
            cout << "Guess any betting  number between 1 & 10:";
            cin >> guess;
            if (guess <= 0 || guess > 10)
            {
                cout << "\nNumber should be between 1 to 10\n"
                     << "Re-enter number:\n ";
            }
        } while (guess <= 0 || guess > 10);
        dice = rand() % 10 + 1;
        if (dice == guess)
        {
            cout << "\n\n You are luck!! You have won Rs. " << bettingAmount * 10;
            balance = balance + bettingAmount * 10;
        }
        else
        {
            cout << " Oops, better luck next time !! you lose $ " 
            << bettingAmount << "\n";
            balance = balance - bettingAmount;
        }
        cout<<"\nThe winning number was : "<< dice <<endl;
        cout<< "\n"<<playerName<<", you have blance of $ "<<balance<<endl;
        if(balance == 0)
        {
            cout<<" You have no money to play game ";
            break;
        }
            cout<<"\n\n-->Do you want to play again (y/n)? ";
            cin>> choice;

    }while(choice== 'y' || choice== 'Y');
     cout<<"\n\n\n";
     cout<< "\n\nThanks for playing the game. Your balance is $ " << balance << "\n\n";

        return 0;
    }
  void rules()
    {
    system("cls");
    cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 10 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}
