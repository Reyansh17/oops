#include<iostream>
#include<string>
using namespace std;
class mobile{
    private:
    string name;
    public:
    int ram;
    int battery;
    string processor;
    
    mobile (string n="null",int r=0,int b=0,string p="null"){
        name=n;
        ram=r;
        battery=b;
        processor=p;
    }
    mobile(mobile &j){
          name=j.name;
        ram=j.ram;
        battery=j.battery;
        processor=j.processor;
    }
    void getdata();
    };
     void mobile::getdata(){
        cout<<"name:"<<name<<endl;
      
        cout<<"ram"<<ram<<endl;
       
        cout<<"battery"<<battery <<endl;
        
        cout<<"processor"<<processor<<endl;
     
    }

int main(){
    mobile m1;
    mobile m2("oppo",8,5000,"axios");
    mobile m3=m2;
    m1.getdata();
    m2.getdata();
    m3.getdata();
    

}


