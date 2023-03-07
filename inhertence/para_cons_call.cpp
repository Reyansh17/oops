#include <iostream>
using namespace std;
class id
{
    int age;

public:
    // default constructor initialization is very important in inheritance withiut it code will not run
    id(int x)
    {
        age = x;
        cout << "i am a id constructor" << endl;
    }
};
class character : public id
{
    int z;

public:
    // calling paramaterised base class constructor
    character(int k) : id(k)
    {
        z = k;
        cout << "i am a character constructor" << endl;
    }
};
int main()
{
    character c1(3);
    return 0;
}