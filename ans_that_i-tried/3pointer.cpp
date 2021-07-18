#include<iostream>
using namespace std;
int main(){
     int a,b;
     int* c = &a; //c holds the adress of a.
     int* d = &b; // d holds the adress of b.
     cin>>a>>b;
     if ((*c)>(*d))
     {
        cout<<(*c)+(*d)<<endl;
        cout<<(*c)-(*d)<<endl;
     }
     else{
         cout<<(*c)+(*d)<<endl;
         cout<<(*d)-(*c)<<endl;

     }
return 0;
}