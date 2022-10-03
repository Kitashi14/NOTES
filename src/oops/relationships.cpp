#include <iostream>
using namespace std;

class Base1
{

public:
    void b1_f1()
    {
        cout << "Base 1 funciton 1 called." << endl;
        return;
    }

    void b1_f2()
    {
        cout << "Base 1 funciton 2 called." << endl;
        return;
    }

    void b1_f3()
    {
        cout << "Base 1 funciton 3 called." << endl;
        return;
    }
};

class Base2
{

public:
    void b2_f1()
    {
        cout << "Base 2 funciton 1 called." << endl;
        return;
    }

    void b2_f2()
    {
        cout << "Base 2 funciton 2 called." << endl;
        return;
    }

    void b2_f3()
    {
        cout << "Base 2 funciton 3 called." << endl;
        return;
    }
};

// using isA relationship
class Derived1 : public Base1, public Base2
{
    // inherited all the propertied from both the base classes;
};

// using hasA relationship
class Derived2
{
private:
    Base1 b1;
    Base2 b2;

public:
    // using specific features/function of other class
    void b1_f1()
    {
        b1.b1_f1();
        return;
    }

    void b2_f2()
    {
        b2.b2_f2();
        return;
    }
};

int main()
{

    Derived1 d1;
    // can call all functions of both base classes in isA relationship
    d1.b1_f1();
    d1.b1_f2();
    d1.b1_f3();
    d1.b2_f1();
    d1.b2_f2();
    d1.b2_f3();
    cout<<"\n";

    Derived2 d2;
    // can call only specified functions of both base classes in hasA relationship
    d2.b1_f1();
    // d2.b1_f2();     //will give error
    // d2.b1_f3();     //will give error
    // d2.b2_f1();     //will give error
    d2.b2_f2();
    // d2.b2_f3();     //will give error
    cout<<"\n";

    return 0;
}