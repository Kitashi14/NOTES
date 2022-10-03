#include <iostream>
using namespace std;

// abstract class
class person
{
public:
    virtual void function() = 0; //for virtual keyword to work there should be overrided function of it;

    virtual void give()
    {
        cout << "person got the cake." << endl;
    }

    person()
    {
        cout << "Base class constructor called." << endl;
    }
    virtual ~person()
    {
        cout << "Base class destroyed." << endl;
    }
};

class boy : public person
{
public:
    void function(){}
    void give()
    {

        cout << "boy got the cake" << endl;
        return;
    }
    boy()
    {
        cout << "Boy class constructor called." << endl;
    }
    ~boy()
    {
        cout << "Boy class destroyed." << endl;
    }
};

class girl : public person
{
public:
    void function(){}
    void give()
    {
        cout << "girl got the cake" << endl;
        return;
    }
    girl()
    {
        cout << "Girl class constructor called." << endl;
    }
    ~girl()
    {
        cout << "Girl class destroyed." << endl;
    }
};

int main()
{

    // person p;   //will give error as we can't create object from abstract class

    person *ptr;
    // ptr = new person(); //will give error for same reason

    ptr = new boy();
    ptr->give();
    cout << "\n";

    ptr = new girl();
    ptr->give();
    cout << "\n";

    delete (ptr);

    return 0;
}