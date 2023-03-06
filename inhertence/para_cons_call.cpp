#include<iostream>
using namespace std;
class id
{  int age;
public:
    id(int x){
        age=x;
        cout<<"i am a id constructor"<<endl;
    }
};
class character:public id{
       int z;
       public:
        character(int k):id(k){
             z=k;
             cout<<"i am a character constructor"<<endl;
        }

};
int main()
{
    character c1(3);
 return 0;
}