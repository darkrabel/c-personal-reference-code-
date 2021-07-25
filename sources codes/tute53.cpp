#include<iostream>
using namespace std;
class A{
  int a;
  public: 
  void setdata(int a){
   this -> a = a;
  }
  void getdata(){
      cout<<"this is the value ---->"<<a<<endl;
  }
};
int main(){
    A *ptr = new A[4];
    (*ptr).setdata(400);
    (*ptr).getdata();
    (ptr+1) ->setdata(4);
    (ptr+1) ->getdata();


     
return 0;
}