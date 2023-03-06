#include<iostream>
using namespace std;
class h{
    
    protected:
   int a =9;
    int b=10;
    public:
     void show(){
        cout<<a;
        cout<<b;
     }
    


};
class input:public h{
     public:
  void inp(){
   
    cin>>a;
    cin>>b;
}


};
int main()
{
    input i1;
    i1.inp();
    i1.show();

 return 0;
}