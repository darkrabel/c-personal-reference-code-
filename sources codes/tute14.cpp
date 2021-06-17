
#include<iostream>
#include<stdio.h>
using namespace std;


typedef struct employee
{
    int id;
    float salary;
    char favacar;
    string name;

} em ;
union money
{
    int rice;
    float money;

};




int main(){


    // union money object;
    // object.rice = 120;  
    //cout<<object.rice;
    // object.money =12.555;
    // cout<<object.money<<endl;
    
  
    // struct employee faheem;
    // struct employee farhan;
    // struct employee tahmid;
    // em harry;


    // faheem.id = 12324;
    // faheem.salary =1511.002;
    // faheem.favacar= 'f';
    // faheem.name = "faheem";
    // //new 
    // harry.id =55;
    // harry.salary = 43132;
    // harry.favacar = 'a';
    // harry.name = "code with harry";


    

    // cout<<"the value is :"<<faheem.salary<<endl;
    // cout<<"the value is :"<<faheem.id<<endl;
    // cout<<"the value is :"<<faheem.favacar<<endl;
    // cout<<"the value is :"<<faheem.name<<endl;

    enum meal { breakfast, lunch , diner};
    meal day = breakfast;
    cout<<day;
    

    
   

    

     
return 0;
}