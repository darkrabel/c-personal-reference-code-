#include<iostream>
using namespace std;
class complex{
        
        int a , b ;
        complex sumdatacom(complex o1 , complex o2);
        public:
        void setdata(int n1 , int n2){
            a = n1;
            b = n2;
        }
        void printnum(){
            cout<<"your number is "<<a<<" + "<<b <<"i "<<endl;
        }
};
complex sumdatacom(complex o1 , complex o2){
    complex o3;
    o3.sumdatacom((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    complex c1 , c2, sum;
    c1.setdata(4,3);
    c1.printnum();
    c2.setdata(4,3);
    c2.printnum();
return 0;
}