#include<iostream>
using namespace std;

class Base
{
    public:
        int i , j;
        Base()
        {
            cout<<"inside base constructor \n";
            i = 0;
            j = 0;
        }

        ~Base()
        {
            cout<<"inside base destructor\n";
        }

        void fun()
        {
            cout<<"inside base fun\n";
        }
};

class Derived : public Base
{
    public:
    int x;

    Derived()
    {
        cout<<"inside derived constructor\n";
        x =0 ;
    }

    ~Derived()
    {
        cout<<"inside derived destructor\n";
    }

    void gun()
    {
        cout<<"inside gun of derived\n";
    }

};

int main()
{
    cout<<"inside main\n";

    Derived dobj;

    cout<<"size of base class object is: "<<sizeof(Base)<<"\n";                     //8
    cout<<"size of derived class object is: "<<sizeof(Derived)<<"\n";               //12

    cout<<dobj.i<<"\n";             //0
    cout<<dobj.j<<"\n";             //0
    cout<<dobj.x<<"\n";             //0

    dobj.fun();
    dobj.gun();

    cout<<"end of main\n";

    return 0;
}