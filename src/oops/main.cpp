#include <bits/stdc++.h>
using namespace std;

class Demo
{

private:
    int num1;

public:
    // non-parameterized constructor
    Demo()
    {
        num1 = 69;
    }

    // parameterized constructor
    Demo(int x)
    {
        num1 = x;
    }

    // Overloaded constructor (combining parameterized and non-parameterized constructor)

    // Demo(int x=69){
    //     num1 =x;
    // }

    // copy constructor
    // Demo(Demo obj){}         //gives error if not a reference type parameter when defining copy constructor
    Demo(Demo &obj)
    {
        num1 = obj.num1;
    }

    void setValue(int x)
    {
        num1 = x;
        return;
    }

    void showNum()
    {
        cout << num1 << endl;
        return;
    }

    // only declaring the function in the class
    void showAddress();

    // traditional aproach for adding object values
    Demo addNum(Demo obj)
    {
        Demo temp;
        temp.num1 = num1 + obj.num1;
        return temp;
    }

    // using operator overlaoding
    Demo operator+(Demo obj)
    {
        Demo temp;
        temp.num1 = num1 + obj.num1;
        return temp;
    }

    // pre-increment operator overloading
    Demo operator++()
    {
        Demo temp;
        temp.num1 = num1;
        num1++;
        return temp;
    }

    // post-increment operator overloading
    Demo operator++(int)
    {
        Demo temp;
        temp.num1 = num1 + 1;
        num1++;
        return temp;
    }


    //destructor
    ~Demo(){

        cout<<"Demo class Destroyed with "<<num1<<endl;
        return;
    }
};

// defining the function outside the class
void Demo::showAddress()
{
    cout << &num1 << endl;
    return;
}

int main()
{

    Demo a;
    a.showNum();
    a.showAddress();

    // Demo B();
    // B.showNum();     //shows error

    Demo c(44);
    c.showNum();
    c.showAddress();

    Demo d(c);
    d.showNum();
    d.showAddress();

    Demo e = c;
    e.showNum();
    e.showAddress();

    cout << "\n";

    Demo total;
    total.showNum();
    total = d.addNum(c);
    total.showNum();

    Demo total2;
    total2.showNum();
    total2 = d + c;
    total2.showNum();

    cout << "\n";

    // Demo f = total++;       //invalid initializer
    Demo f;
    f = total++;
    f.showNum();
    total.showNum();

    Demo g;
    g = ++total2;
    g.showNum();
    total2.showNum();

    return 0;
}