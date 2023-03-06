#include <iostream>
using namespace std;
class Base
{
   int x;

public:
   // default constructor
   Base()
   {
      cout << "Base default constructor\n";
   }
   Base(int y){
    cout<<"i am a para base constructor"<<endl;
   }
   ~Base(){
    cout<<"i am a base destructor"<<endl;
   }
};

class Derived : public Base
{
   int y;

public:
   // default constructor
   Derived()
   {
      cout << "Derived default constructor\n";
   }
   // parameterized constructor
   Derived(int i)
   {
      cout << "Derived parameterized constructor\n";
   }
   ~Derived(){
    cout<<"i am a derived destructor"<<endl;
   }
};

int main()
{
   Base b;
  // Base b1(2);
   Derived d1;
   Derived d2(10);
}