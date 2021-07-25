#include<iostream>
using namespace std;
class shop{
private: 
int id ;
float price ;
public:
void setdata (int a , float b){
    id = a;
    price = b;
}
void getdata(){
    cout<<"the id is "<<id<<endl<<"the price is "<<price<<endl;
}

};
int main(){
    shop *ss = new shop[400];
    (*ss).setdata(4,5.2154);
    (*ss).getdata(); 
    int Number_of_arrays = 1;
    for (int i = 1; i < 400; i++)
    {   
        for (int t = 1; t < 40; t++)
        {   

            
            (ss + i) ->setdata(t,65);
            (ss + i) ->getdata();

        }
        
       
    }
    

return 0;
}