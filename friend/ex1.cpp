#include<iostream>
using namespace std;
class super;
class hero
{
    int a=10;
    public:
    friend void name(hero o1, super o2);
};
class super{
    int b=19;
    public:
    friend void name(hero o1, super o2);


};

void name(hero o1,super o2){
     int t;
     t=o1.a;
     o1.a=o2.b;
     o2.b=t;
     cout<<o1.a<<"\n"<<o2.b;
    

     

}

int main()
{
   hero a;
   super b;
  name(a,b); 
 return 0;
}