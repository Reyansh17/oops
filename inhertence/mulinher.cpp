#include<iostream>
using namespace std;
class human
{
    public :
    void bol(){
        cout<<"I am human";
    }
};
class animal
{
    public :
    void talk(){
        cout<<"I am animal";
    }
};

class hybrid:public human,public animal
{
    public :
    void speak(){
        cout<<"I am hybrid";
    }
};
int main()
{
    hybrid h1;
    h1.speak();
    h1.talk();
    h1.bol();

 return 0;
}