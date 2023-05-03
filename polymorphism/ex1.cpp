#include<iostream>
using namespace std;
class baseclass
{
    
    public:
    int var_base;
    void display(){
          cout<<"value of var_base is :"<<var_base<<endl;
    };
    
};
class derived_class:public baseclass{
    public:
    int var_derived;
    void display(){
          cout<<"value of var_derived is:"<<var_derived<<endl;
    };

};
int main()
{
    baseclass *basepointer;
    baseclass base_obj;
    derived_class derived_obj;
    basepointer=&derived_obj;
    basepointer->var_base=78;
    basepointer->display();
   // basepointer->var_derived=89//will throw error
   derived_class *derived_pointer;
   derived_pointer=&derived_obj;
   derived_pointer->var_derived=98;
   derived_pointer->display();
 return 0;
}