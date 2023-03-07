#include<iostream>
using namespace std;
class room
{
     int c,t;
     public:
     room(){}
     room(int c, int t){
        this->c=c;//this pointer , it does not uses extra block of memory
        this->t=t;
     }
     void get_data(){
        cout<<c<<"  "<<t<<endl;
     }
   

};
int main()
{  int x,y;
    room *arr=new room[5];
    //arr[0]=room(1,2);
    //arr[0].get_data();
    //arr[1]=room(3,4);
    //arr[1].get_data();
    
    for(int i =0;i<5;i++){
        cin>>x>>y;
        arr[i]=room(x,y);
    }
    for(int j=0;j<5;j++){
        arr[j].get_data();
    }
    delete [] arr;//for deallocating memory
    arr[0].get_data();
 return 0;
}