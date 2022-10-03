#include<iostream>
using namespace std;

class Base{
    public:

    void function(){
        cout<<"Base class called."<<endl;
        return;
    }
};

class Derived :public Base{
    public:

    //overriding function
    void function(){
        cout<<"Derived class called."<<endl;
        return;
    }
};

class Derived2 :public Base{

    public:

    //overriding function
    void function(){
        cout<<"Derived class called."<<endl;
        Base::function();   //base class function will be called
        return;
    }
};


int main(){

    Base b;
    b.function();   
    cout<<"\n";

    Derived d;
    d.function();   
    cout<<"\n";

    Derived2 d2;
    d2.function();
    cout<<"\n";

    return 0;
}