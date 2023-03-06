#include<iostream >
#include<string.h>
using namespace std;
class hero{
    private:
    int a;
    int b;

    public:
hero(){
   
    count++;

}
static int count;

};
int hero::count=0;
int main(){
hero h1,h2,h3,h4;
cout<<hero::count;

}