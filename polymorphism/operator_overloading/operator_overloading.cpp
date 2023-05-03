#include<iostream>
using namespace std;
class test
{    int a,b,c;
    public:
    int getdata(int x,int y, int z);
     void operator -();
     void display();


};
int test::getdata(int x,int y,int z){
   a=x;
   b=y;
   c=z;
};
void test::operator-(){
    a=-a;
    b=-b;
    c=-c;
}
void test::display(){
    cout<<a<<b<<c;
}
int main()
{
    test t1;
    t1.getdata(-3,5,-2);
    -t1;//calling of operator
    t1.display();
 return 0;
}