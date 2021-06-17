#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;
    void check_binary(void);

public:
    void read(void);
    void display(void);
    void once_compliment(void);
};
void binary ::read(void)
{
    cout<< "enter a binary number" << endl;
    cin >> s;
}
void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<< " this is not a binar number ";
            exit(0);
        }
    }
}
void binary::ones_compliment(void)
{
    check_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}

using namespace std;
int main()
{    
    binary b;
    b.read();
    b.once_compliment();

    return 0;
}