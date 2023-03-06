#include<iostream>
using namespace std;

class animal{
    public:
   int leg =7;
   int eye=2;


};
class dog:public animal{
    public:
   int tail=1;
};
int main (){
dog d1,d2;
cout<<d1.leg;
cout<<d2.eye;
cout<<d1.tail;
}