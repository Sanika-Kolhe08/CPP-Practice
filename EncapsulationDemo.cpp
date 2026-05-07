#include <iostream>
using namespace std;

 //Encapsulation - Binding charachteristics and behaviour together

class Marvellous     
{
    //access specifier
    public :  
    int no1, no2;             //characteristics

    void fun()                  //Behaviour
    {
        cout<<"Inside Fun\n"; 
    }

    void gun()
    {
        cout<<"Inside Gun\n";      //Behaviour
    }



};


int main()
{
    //Object creation (Instance)
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n"; //8
    cout<<mobj1.no1<<"\n";

    mobj1.fun();
    mobj2.fun();
    mobj1.gun();
    mobj2.gun();


    return 0;
}