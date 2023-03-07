#include <iostream>
using namespace std;
class test
{
public:
 int a;
 void seta(int a)
 {
 this->a=a;
 }
 test sum(test o1, test o2 )
 {
 test temp;
 temp.a = o1.a + o2.a; //o1.a + o2.a

 return temp;
 }
};
int main()
{
 test o1,o2,o3; //o1.a o2.a o3.a
 o1.seta(2);
 o2.seta(3);
 o3 = o3.sum(o1,o2); //call by value
 cout << o3.a << endl;
 return 0;
}