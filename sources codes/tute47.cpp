#include <iostream>
#include <cmath>
using namespace std;
class simplecalc
{
protected:
    int a, b;

public:
    void theques()
    {
        cout << "wha public sie public sie public sie public sie public sie public siet is the num1 , num2 ?" << endl;
        cin >> a >> b;
    }
    void process()
    {

        cout << "the num 1 +num 2 is " << a + b;
        cout << "the num 1 -num 2 is " << a - b;
        cout << "the num 1 *num 2 is " << a * b;
        cout << "the num 1 /num 2 is " << a / b;
    }
};
class  sientefic : public virtual simplecalc
{
    public:
    void process1()
    {
        cout << "the cos a is " << cos(a) << endl;
        cout << "the cosec a is" << sin(a) << endl;
        cout << "the sin a is " << 1 / cos(a) << endl;
        cout << "the tan a is " << tan(a) << endl;
    }
};

class hybridcalc : public virtual simplecalc , public virtual sientefic{



};
int main(){
    hybridcalc a;
    a.theques();
    a.process();
    a.process1();


    return 0;
}