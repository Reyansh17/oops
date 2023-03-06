#include<iostream>
using namespace std;
class hero
{   int x;
     public:
    hero(){
        cout<<"i am constructior"<<endl;
    }
    hero(int y){
        cout<<"hello"<<endl;
    }
    ~hero (){
        cout<<"i am destructor"<<endl;
    }
};
int main()
{    int x=3;
    if (x){
        hero h1;

    }
    hero h2;
    hero h3(3);



 return 0;
}