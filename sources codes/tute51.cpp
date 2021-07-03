#include<iostream>
using namespace std;
class complex{
 int real , imagenary;
 public: 
 void getdata(){
     cout<<"the real data is "<<real<<endl;
     cout<<"the imagenary data is "<<imagenary<<endl;
 }
 int setdata( int a, int b){
     real = a;
     imagenary = b;

 }
};
int main(){
     complex faheem;
     complex *ptr = &faheem;
    (*ptr).setdata(1,2);
    (*ptr).getdata();
    //  faheem.setdata(110,15);
    //  faheem.getdata();
return 0;
}
