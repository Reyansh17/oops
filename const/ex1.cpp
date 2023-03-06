#include <iostream>
using namespace std;
class me
{
    const int a;

public:
    me(int x):a(x)
    { // initialization of a constant memember in constructor
        cout << "value of a is :" << a<<endl;
        // a++;
        // in every object its independent copy will be present,
        // hence it is initialized with each object using the constructor.And once initialized, its value cannot be changed
    }
};
int main()
{
    me m1(2), m2(3), me3(4);

    return 0;
}