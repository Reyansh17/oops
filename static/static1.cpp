#include<iostream >
#include<string.h>
using namespace std;
class hero{

    static int count;

    public:
   hero(){
   
    count++;

}
 static int putdata(){
    return count;
}

};
int hero::count=0;
int main(){
hero h1,h2,h3,h4;
cout<<hero::putdata();

}