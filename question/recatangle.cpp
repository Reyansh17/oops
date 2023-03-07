#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class triangle;
class rectangle
{
    int l;
    int b;
    string color;
    public:
    void setdata(){
        cin>>l>>b>>color;
    }
    friend double sum(triangle r1,rectangle t1);
};
class triangle{
    int s1,s2,s3;
    string color;
    public:
    void setdat(int s1,int s2,int s3){
        this->s1=s1;
        this->s2=s2;//this pointer
        this->s3=s3;

    }
     triangle(){
        string color="green";
     }
     friend double sum(triangle r1,rectangle t1);
      

};
double sum(triangle r1,rectangle t1){
       double sumr,sum2,s;
       s=(double)(r1.s1+r1.s2+r1.s3)/2;
       
       sumr=(double)pow((s*(s-r1.s1)*(s-r1.s2)*(s-r1.s3)),0.5);
       
       sum2=(double)(t1.l*t1.b);
       return (sumr+sum2);

       
       

}
int main()
{
     rectangle r;
     triangle t;
     r.setdata();
     t.setdat(2,2,3);
     cout<<sum(t,r)<<endl;

 return 0;
}