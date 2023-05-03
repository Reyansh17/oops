#include <iostream>
using namespace std;
class base
{
    // On using Virtual keyword with Base class's function, Late Binding takes place and the derived version of function will be called, because base class pointer pointes to Derived class object.
public:
    virtual void show()
    {
        cout << "base class" << endl;
    };
};
class derived : public base
{
public:
     void show()
    {
        cout << "derived class";
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
    b = &d; 
    b->show();
    return 0;
}