#include<iostream>
using namespace std;
class cg
{   int c1,c2,sum;
    public:
    void getdata();
    void setdata();
    void  total(cg,cg);
};
void cg::getdata(){
      cout<<sum<<endl;

}
void cg::setdata(){
    cout<<"enter 1 sem cg";
    cin>>c1;
    cout<<"enter 2nd sem cg"<<endl;
    cin>>c2;

}
void cg::total(cg s1,cg s2){
   
    sum=s1.c1+s2.c2;
}


int main()
{
        cg s1,s2,s3;
        s1.setdata();
        s3.total(s1,s2);
        s3.getdata();





 return 0;
}