#include<iostream>
using namespace std;

class Alpha{

    private:
    int a;
    int b;

    public: 
        static int stat;    //can't initialize a static variable inside the class
        Alpha(int x =0,int y=0){
            a =x;
            b=y;
            stat++;
        }

        static int statFunc(int x){
            return stat + x;
        }
};
//have to initialize static variable outside the class and any other function(main also);
int Alpha::stat =0;

int main(){
    cout<<Alpha::stat<<endl;
    Alpha a1(34);
    cout<<a1.stat<<endl;
    a1.stat=78;
    cout<<a1.stat<<endl;
    Alpha a2(45);
    cout<<a2.stat<<endl;
    cout<<a1.statFunc(64)<<endl;
    cout<<"\n";

    return 0;
}