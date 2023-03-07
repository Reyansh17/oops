#include<iostream>
namespace A
{
int i;
void dispI()
{
 std::cout<< i;
}}
namespace Inside
 {
 int insideI;
 void displayInside()
 {
 std::cout << insideI;
 }
 }

int main()
{
 
 A::i = 10;
 std::cout<< A::i;
 A::dispI();
 Inside::insideI =20;
 std::cout << Inside::insideI<<std::endl;
 Inside::displayInside();
}