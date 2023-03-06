#include<iostream>
using namespace std;
class human{
    private:
    int height;
    int weight;
    int age;
public:
    int getage(){
        return age;
    }
    int set_age(int a){
        age=a;
    }

};
class male:public human{

string quality;

void print(){
    cout<<"hardworking";
}


};

int main()
{
    male m1;
    m1.set_age(12);
    cout<<m1.getage();
 return 0;
}