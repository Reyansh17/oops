#include <iostream>
#include <string>
#include<conio.h>
using namespace std;
class atm{
    private:
    long int acc_no;
    string name;
    int pin;
    double balance;
    int mobile_no;
    public:
   void setdata( long int an,string n,int p,double b,int m){
       acc_no=an;
       name=n;
       pin=p;
       balance=b;
       mobile_no=m;
   }
   long int getaccdata(){
       return acc_no;
   }
    string getnamedata(){
         return name;
    }
    int getpindata(){
        return pin;
    }
    double getbalancedata(){
        return balance;
    }
    int getmobiledata(){
        return mobile_no;
    }




};

int main(){

    int enterac,enterpin;
    cout<<"enter the account number";
    cin>>enterac;
     cout<<"enter the pin number";
    cin>>enteroin;

    atm user1;
    user1.setdata(1232453,"reyansh",678,10000,8112239954)
   do {
     if(user1.getacdata()==enterac &&  user1.getpindata()==enterpin  ){
                system("cls");
                cout<<"welcome\n";
                cout<<""









     }


   }
}