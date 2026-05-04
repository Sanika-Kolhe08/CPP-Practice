#include <iostream>
using namespace std;

class Marvellous     
{
    //access specifier
    public :  
    int no1, no2;                                 //characteristics

    Marvellous()                                   //Default Constructor
    {
        cout<<"Inside Default constructor\n";
        no1=0;
        no2=0;
    }

    Marvellous(int a,int b)                          //Parameterised Constructor
    {
        cout<<"Inside Paramaterised constructor\n";
        no1=a;
        no2=b;
    }

    Marvellous(Marvellous &ref)                     //Copy constructor
    {
        cout<<"Inside Copy Constructor\n";
        no1=ref.no1;
        no2=ref.no2;
    }

    ~Marvellous()                                  //destructor
    {
        cout<<"Inside Destructor\n";  
    }

};

int main()
{
    cout<<"Inside Main\n";

    Marvellous mobj1    ;                             //Default Constructor object
    Marvellous mobj2(11,21);                        //Parametrized Constructor object
    Marvellous mobj3(mobj2);                        //Copy Constructor object

    cout<<"End of Main\n";
    return 0;
}   //All destructors gets called