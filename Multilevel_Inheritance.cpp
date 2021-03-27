/* 
    Saksham is on the Code 
*/
// 'Multilevel_Inheritance.cpp'
// Multilevel Inheritance

#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Base class content.";
    }
};

class B : public A
{
};

class C : public B
{
};

int main()
{
    C obj;
    obj.display();
    return 0;
}