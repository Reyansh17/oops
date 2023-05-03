//unary operator overloading
#include<iostream>
using namespace std;
class test
{
    int num;
    public:
    test(int num){
        this->num=num;
    };
    test operator ++(){
        num=num+3;
    };
    void print(){
    cout<<num;
    };
};
int main()
{
    test tt(8);
    ++tt;
    tt.print();
 return 0;
}