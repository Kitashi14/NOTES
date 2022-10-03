#include <iostream>
using namespace std;

class Alpha
{
private:
    int a;

public:
    Alpha(int b = 0)
    {
        a = b;
        return;
    }
    // declaring a function as friend;
    friend void frFunc();
    friend void frFunc2(Alpha &a);
};

class Beta
{
private:
    int b;

public:
    Beta(int c = 0)
    {
        b = c;
        return;
    }
    friend void frFunc();
};

void frFunc()
{
    Alpha a(34);
    Beta b(64);

    int sum = a.a + b.b;       // able to access private properties of friend class
    cout << "Sum " << sum << endl;
    return;
}

void frFunc2(Alpha &a){

    cout<<"Sum "<<a.a<<endl;
    return;
}

int main()
{

    frFunc();

    Alpha a(78);
    frFunc2(a);

    return 0;
}
