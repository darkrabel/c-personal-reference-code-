#include<iostream>
using namespace std;
int main(){
    int age;
     cout<<"this is party management syste,"<<endl;
     cout<<"welcome sir \n enjoy your stay "<<endl;
     cout<<"please tell us what is your age "<<endl;
     cin>>age; 
    // if ((age<18) && (age>1))
    // {
    //     cout<<"you can not come to party"<<endl;
        

    // }
    // else if (age == 18)
    // {
    //  cout<<"you  are a kid you can come to the pirty and you will get a kid pass"<<endl;
    //     /* code */
    // }
    // else if (age<1){
    //     cout<<"you are not born yet"<<endl;
    // }
    // else
    // {
    //     cout<<"you can come to the party"<<endl;   
    // }
    
    
    switch (age)
    {
    case 18:
        /* code */
        cout<<"you are kid you can come to the pirty";
        break;
    case 28:
        cout<<"you can not come to the pirty";
        break;
    default:
         cout<<"no special cases";
        break;
    }
return 0;
} 

