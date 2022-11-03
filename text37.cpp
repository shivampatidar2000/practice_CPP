#include <iostream>
using namespace std;

class Binary
{
    string s;
    void chh_bin();

public:
    void read(void);
    void ones_complement();
    void display();
};
void Binary ::read(void)
{
    cout << "Enter the binary number ";
    cin >> s;
}

void Binary ::chh_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Its not a binary number ";
            exit(0);
        }
    }
}
void Binary ::ones_complement(void)
{
    chh_bin();
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
            s.at(i) = '0';
    }
}
void Binary ::display(void)
{
    cout <<"Dispaly you Binary number "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    Binary b;
    b.read();
    // b.chh_bin();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}