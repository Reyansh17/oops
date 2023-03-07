#include<iostream>
using namespace std;

class apple{
    int a;
    public:
    int getdata(){
        cout<<"enter the no. of apples";
        cin>>a;
    }
    int putdata(){
        return a;
    }
};
class mangoes{

    int m;
    public:
    int getdata_m(){
        cout<<"entrer the mangoes";
        cin>>m;
    }
    int putdata_m(){
        return m;
    }
};
class fruits:public apple,public mangoes
{
    int t;
    public:
    int total(){
        t=putdata()+putdata_m();//add like this when variables are private member
        cout<<"total fruits ="<<t<<endl;
    }
};
int main()
{
    fruits f;
    f.getdata();
    f.getdata_m();
    f.total();

 return 0;
}
//-------------by using friend function ----------------------//
/**
 iostream>
using namespace std;
class mango;
class apple{
	int a;
	public:
	void setdata(){
	int x;
	cout<<"the no. of apples";
	cin>>x;
	a=x;
	
}
int getdata(){
	return a;
}
friend void fruits(apple a,mango b);
};
class mango{
	int b;
	public:
	void setdata(){
	int x;
	cout<<"the no. of mango";
	cin>>x;
	b=x;
}
friend void fruits(apple a,mango b);
int getdata(){
return b;}
};

void fruits(apple l,mango m){
	
	int sum=l.a+m.b ;
	cout<< "the sum is "<< sum;
};
int main(){
	apple a;
	a.setdata();
	a.getdata();
	mango m;
	m.setdata();
	m.getdata();
	fruits(a,m);
}
 **/