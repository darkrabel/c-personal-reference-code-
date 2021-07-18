#include<iostream>
using namespace std;
int findout(int a , int b , int c  ,int d  ){
    if (a>b& a>c & a>d)
    {
        cout<<a;
    }
    else if (b>a & b>c & b>d){

        cout<<b;
    }
    else if (c>a & c>b & c>d){
        cout<<c;
    }
    else{
        cout<<d;
    }
    return 0;
int main(){
int a1,b1,c1 d1;
cin>>a1>>b1>>c1>>d1;
findout(4,3,2,1);
return 0;
}