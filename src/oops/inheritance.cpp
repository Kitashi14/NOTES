#include <bits/stdc++.h>
using namespace std;

class rectangle
{
public:
    int length;
    int breadth;

    void show()
    {
        cout << "length " << length << endl;
        ;
        cout << "breadth " << breadth << endl;
        return;
    }
    void area()
    {
        cout << "Area of rectangle is " << length * breadth << endl;
        return;
    }
};

class cuboid : public rectangle // publicly inheriting another class
{
public:
    int height;
    void display()
    {
        cout << "height " << height << endl;
        return;
    }
    void volume()
    {
        cout << "Volume of cuboid is " << length * breadth * height << endl;
        return;
    }
};

class base
{
public:
    int n;
    base()
    {
        cout << "Default constuctor of Base class." << endl;
        n = 69;
        return;
    }
    base(int b)
    {
        cout << "Parameterized constructor of Base Class. " << b << endl;
        n = b;
        return;
    }

    ~base(){
        cout<<"Base class destroyed with "<<n<<endl;
        return;
    }
};

class derived : public base
{
    int m;
};

class derived2 : public base
{
public:
    derived2()
    {
        cout << "Default constructor of derived2 class." << endl;
        n = 70;
        return;
    }
    derived2(int b)
    {
        cout << "Parameterized constructor of derived2 class. " << b << endl;
        n = b;
        return;
    }
    ~derived2(){
        cout<<"Derived2 class destroyed with "<<n<<endl;
        return;
    }
};

class derived3 : public base
{
public:
    derived3() : base()
    {
        cout << "Default constructor of derived3 class." << endl;
        n = 71;
        return;
    }

    derived3(int b) : base(b)
    {
        cout << "Parameterized constructor of derived3 class. " << b << endl;
        n = b;
        return;
    }

    ~derived3(){
        cout<<"Derived3 class destroyed with "<<n<<endl;
        return;
    }
};

int main()
{
    rectangle r;
    r.length = 10;
    r.breadth = 20;
    r.show();
    r.area();
    cout << "\n";

    cuboid c;
    c.length = 32;
    c.breadth = 45;
    c.height = 64;
    c.show();
    c.display();
    c.area();
    c.volume();
    cout << "\n";

    derived d1; // calls default constructor of base class as no default constructor specified for derived class
    cout << d1.n << endl;
    cout << "\n";

    // derived d2(7);       //can't call parameterized constructor of base class
    // cout<<d2.n<<endl;
    // cout<<"\n";

    derived2 d21; // calls default constructor of base class first then the default constructor of derived class
    cout << d21.n << endl;
    cout << "\n";

    derived2 d22(45); // calls default constructor of base class first then the paramerterized constructor of derived class
    cout << d22.n << endl;
    cout << "\n";

    derived3 d31; // calls default constructor of base class then that of derived class
    cout << d31.n << endl;
    cout << "\n";

    derived3 d32(132); // calls parameterized constructor of base class than that of derived class
    cout << d32.n << endl;
    cout << "\n";

    return 0;
}