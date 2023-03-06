#include<iostream>
using namespace std;
class student
{  public:
   static int count;
 
     student(){
        count++;
    }
};
int student::count=0;
int main()
{   student s1,s2;
    
       cout<< student::count;

 return 0;
}