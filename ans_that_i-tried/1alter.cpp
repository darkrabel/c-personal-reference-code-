#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
     string step [] = {"Greater than 9" , "one" ,"two" , "three" , "four", "five", "six","seven","eight","nine"};
    if(9<n && n>0){
        cout<<step[0];
    }
    else{
        cout<<step[n];
    }
return 0;
}