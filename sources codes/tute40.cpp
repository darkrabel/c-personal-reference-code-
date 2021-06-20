#include<iostream>
using namespace std;
class Grandfather{
         protected : int a;
         public: 
         int b=10;

     };
     class father : public Grandfather{
         
         public:father(void){
             cout<<b;
         }
         


     };
     class son : public father{

     };
int main(){
    father factorial;
     
return 0;
}