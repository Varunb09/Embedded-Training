#include<iostream>
#include<cstring>
using namespace std;

class Base1
{
public:
    Base1()
    {
        cout<<"Base 1 constructor"<<endl;
    }
    ~Base1()
    {
            cout<<"Base 1 destructor"<<endl;
    }
};
class Base2
{
public:
    Base2()
    {
        cout<<"Base 2 constructor"<<endl;
    }
    ~Base2()
    {
        cout<<"Base 2 destructor"<<endl;
    }
};
class Base3
{
public:
    Base3()
    {
        cout<<"Base 3 constructor"<<endl;
    }
    ~Base3()
    {
        cout<<"Base 3 destructor"<<endl;
    }
};
// Using virtual keyword base 2 class executes first then base 1 class
class Derived : public Base1, virtual public Base2, public Base3
{
public:
    Derived()
    {
        cout<<"Derived constructor"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived destructor"<<endl;
    }

};
int main()
{
    Derived d1;
}

