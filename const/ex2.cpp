#include<iostream>
using namespace std;
class cycle
{  int s;
    public : 
  
      cycle(){}
    cycle(int z){
        s=z;
    }
// initialization of a constant function
      void seat() const{
        cout<<"i am a seat of bicycle"<<endl;
     }
     
     void speed(){
          s++;
          cout<<s<<endl;
     }

};


int main()
{   cycle h8;
   cycle h1(10);
   const cycle h2(40);

   h1.seat();
   h1.speed();
   h2.seat();
   

   //h2.speed();  we cannot do as it is a constant object



 return 0;
}