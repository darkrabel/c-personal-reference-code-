#include<iostream>
using namespace std;
class A{
    protected:int a =10;


}
class B :virtual protected A{};
class C :virtual protected A{};
class D : public B,C{
    public:
    void something(){
        cout<<a<<endl;

    }
    

};

int main(){
     D a;
     a.something();
return 0;
}
