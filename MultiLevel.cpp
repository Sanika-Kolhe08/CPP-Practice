#include <iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"Inside Base constructor\n";
            i=0;
            j=0;
        }

        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }

        void fun()
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        int x;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
            x=0;
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }

        void gun()
        {
            cout<<"Inside gun of Derived\n";
        }

};

class DerivedX : public Derived
{
    public:
        int y;

        DerivedX()
        {
            cout<<"Inside DerivedX constructor \n";
            y=0;
        }

        ~DerivedX()
        {
            cout<<"Inside DerivedX destructor\n";
        }

        void sun()
        {
            cout<<"Inside DerivedX Sun \n";
        }
};

int main()
{
    cout<<"Inside Main\n";

    DerivedX dobj;
    
    cout<<"Size of Base class object is : "<<sizeof(Base)<<"\n"; //8
    cout<<"Size of Derived class object is : "<<sizeof(Derived)<<"\n"; //12
    cout<<"Size of DerivedX class object is : "<<sizeof(DerivedX)<<"\n"; //16
    cout<<dobj.i<<"\n";  //0
    cout<<dobj.j<<"\n";  //0
    cout<<dobj.x<<"\n";   //0
    cout<<dobj.y<<"\n";   //0

    dobj.fun();
    dobj.gun();
    dobj.sun();

    cout<<"End of main \n";

    return 0;
}