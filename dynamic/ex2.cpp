#include <iostream>
using namespace std;
int main ()
{
 int i;
// Pointer initialization to null
int* p = NULL; //NULL Character //ASCII
 cout << p<<endl; //0cross0
// Request memory for the variable
// using new operator
p = new int; //learn 1
*p = 29;
// Request block of memory
// using new operator
cout << "Value of p: " << *p << endl; //

float *r = new float(75.25); //learn 2
cout << "Value of r: " << *r << endl;
// Request block of memory of size n
int n = 5;
int *q = new int[n]; //learn 3
for (i = 0; i < n; i++)
q[i] = i+1; // {*q = i+ 1; q++};
cout << "Value store in block of memory"
<<endl;
for (i = 0; i < n; i++)
cout << q[i] << " " << endl;
 int *v=new int(10);
cout<<"value of of v is :"<<*v<<endl;
// freed the allocated memory
delete p;
delete r;
// freed the block of allocated memory
delete[] q; //learn 4
return 0;
}