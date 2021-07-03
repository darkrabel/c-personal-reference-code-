#include<iostream>
using namespace std;
//we will make one class first then we will derived two class from the first class and then 
// we will make a multiple in heritence d;
// class a{
//     public: int g=3;

// };
// class b: public a{

// };
// class c: public a{

// };
// class d: public b , public c{
//     public:
//     d(){
//         cout<<"thsi is the hacking  title "<<g<<endl
        
//     }
// };
// int main(){
//      d d;
     
// return 0;
// }--------->>>this will give us the ambiguity problem .
class a{
    public: int g=3;

};
class b: virtual public a{

};
class c: virtual public a{

};
class d: public b , public c{
    public:
    d(){
        cout<<"the number is "<<g<<endl;
        
    }
};
int main(){
     d d;
     
return 0;
}
