#include<iostream>
using namespace std;
namespace first{
void hello(){
    cout<<"my name is reyansh"<<endl;
}}
namespace second{
    void hello(){
        cout<<"my name is avi"<<endl;
    }
}
int main(){
    first::hello();
    second::hello();
}
