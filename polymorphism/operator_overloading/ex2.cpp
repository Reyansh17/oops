#include<iostream>
using namespace std;
class test
{int a;
public:
    test(){};
    test(int x){
      a=x;
    }
    test operator+(test);
};
test test::operator+(test y){
    int z;
    z=a+y.a;
    cout<<z;
}
int main()
{
    test t1(6),t2(7);
    t1+t2;

 return 0;
}