#include<iostream>
using namespace std;

class Alpha{

    int a;
    public:
    Alpha(int x=0){
        cout<<"Alpha constructor called with "<<a<<endl;
        a=x;
    }
    ~Alpha(){
        cout<<"Alpha destructor called."<<endl;
    }
    friend class Beta;  //making Beta a friend class (one-way declaration)
};

class Beta {
    int b;
    public:
    Beta(int x = 0){
        b=x;
        cout<<"Beta constructor is called  with "<<b<<endl;
    }
    ~Beta(){
        cout<<"Beta destructor is called."<<endl;
    }

    void Sum(Alpha &a){
        cout<<"Sum "<<a.a+ b<<endl;     //can access private members of other class
        return;
    }
};

int main(){

    Alpha a(45);
    Beta b(12);
    b.Sum(a);
    cout<<"\n";
}