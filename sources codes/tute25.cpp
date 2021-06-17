#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 122;

        cout << "enter the id number  " << endl
             << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "your id number is" << id << endl;
    }
};
int main()
{
    employee faheem, rahul, farhan, tahmid;
    faheem.setid();
    faheem.getid();

    return 0;
}