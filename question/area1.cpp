//	Write a program using Array of Objects to display area of multiple rectangles.


#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;
    public:
   
    int area(){
        return length*breadth;
    }
    void setdata(int l, int b){
        length=l;
        breadth=b;
    }
  
};
int main(){
    int arr[5];

    cout<<"enter the length and breadth of 5 rectangles"<<endl;
    for(int i=0;i<5;i++){
        int l,b;
        cin>>l>>b;
        rectangle r;
        r.setdata(l,b);
        arr[i]=r.area();
    }
    for(int i=0;i<5;i++){
        cout<<"area of rectangle"<<i+1<<"is"<<arr[i]<<endl;
    }






}