  #include<iostream>
#include<string>
using namespace std;
class person
{
    
    int age;
    int heigth;
    string name;

   /**person(){
        age=0;
        heigth=0;
        name="null";
    }**/

    public:
    
    person(int a=0,int h=0,string n="null"){
        age=a;
        heigth=h;
        name=n;
    }
    person (person &p2){ 
        age=p2.age;
        heigth=p2.heigth;
        name=p2.name;
    }
    void getdata(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"height:"<<heigth<< endl;
    }





};

int main(){
    person p1,p2(12,5,"reyash"),p3(p2);
    p1.getdata();
    p2.getdata();
    p3.getdata();

}