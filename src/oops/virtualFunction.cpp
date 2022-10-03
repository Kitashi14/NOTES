#include <iostream>
using namespace std;

class Base
{
public:
    void function1()
    {
        cout << "Base class function1." << endl;
        return;
    }
    virtual void function2() // virtual function
    {
        cout << "Base class function2." << endl;
        return;
    }
    Base()
    {
        cout << "Base class constructor called." << endl;
    }
    ~Base()     //since its not virtual so only base class destructor will be called
    {
        cout << "Base class destroyed." << endl;
    }
};

class Derived1 : public Base
{
public:
    void function1()
    {
        cout << "Derived1 class function1." << endl;
        return;
    }

    // commenting this function will remove the effect of vitual function of base class
    void function2()
    {
        cout << "Derived1 class function2." << endl;
        return;
    }
    Derived1()
    {
        cout << "Derived1 class constructor called." << endl;
    }
    ~Derived1()
    {
        cout << "Derived1 class destroyed." << endl;
    }
};

int main()
{

    Base *ptr = NULL;
    ptr = new Derived1();
    ptr->function1(); // base class function is called as base class pointer is used
    cout << "\n";

    ptr->function2(); // base class function been virtualised(made hidden) so derived class function is called if present, if not present then base class will be called
    cout << "\n";
    delete (ptr);   //without this object won't be destroyed so no destructor will be called
    return 0;
}
