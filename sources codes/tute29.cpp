#include<iostream>
using namespace std;
class complex{
    int a , b;

    public:
    complex(void);
    void printnum(void){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
complex ::complex(void){
    a = 10;
    b = 5;

}
int main(){
    complex c;
    c.printnum(c);

     
return 0;
}