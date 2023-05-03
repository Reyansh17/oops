#include<iostream>
using namespace std;
class base
{
    public:
     void show(){
        cout<<"base class"<<endl;
    };
};
class derived:public base {
public:
void show(){
    cout<<"derived class";
};
};
int main()
{
    // base  b;
    // derived d;
    // b.show();
    // d.show();

    base *b;
    derived d;
    b=&d;//early binding when we create a pointer of a base class
    b->show();
 return 0;
}