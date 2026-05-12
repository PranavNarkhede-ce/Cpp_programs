#include<iostream>
using namespace std;

class Base
{
    public:
        int i , j;
        Base()
        {
            cout<<"inside Base constructor \n";
            i = 0;
            j = 0;
        }

        ~Base()
        {
            cout<<"inside Base destructor\n";
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
        cout<<"inside Derived constructor\n";
        x =0 ;
    }

    ~Derived()
    {
        cout<<"inside Derived destructor\n";
    }

    void gun()
    {
        cout<<"inside gun of derived\n";
    }

};

class DerivedX : public Derived
{
    public:
        int y ;

        DerivedX()
        {
            cout<<"inside DerivedX constructor\n";
            y = 0;
        }

        ~DerivedX()
        {
            cout<<"inside DerivedX destructor\n";
        }

        void sun()
        {
            cout<<"inside DerivedX sun \n";
        }

};

int main()
{
    cout<<"inside main\n";

    DerivedX dobj;

    cout<<"size of Base class object is: "<<sizeof(Base)<<"\n";                     //8
    cout<<"size of Derived class object is: "<<sizeof(Derived)<<"\n";               //12
    cout<<"size of DerivedX class object is: "<<sizeof(DerivedX)<<"\n";               //16


    cout<<dobj.i<<"\n";             //0
    cout<<dobj.j<<"\n";             //0
    cout<<dobj.x<<"\n";             //0
    cout<<dobj.y<<"\n";             //0


    dobj.fun();
    dobj.gun();
    dobj.sun();

    cout<<"end of main\n";

    return 0;
}