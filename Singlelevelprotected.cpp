#include<iostream>
using namespace std;

class Base
{
    protected:
        int i , j;

    public:
        Base()
        {
            cout<<"inside base constructor \n";
            i = 10;
            j = 11;
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
        x =21 ;
    }

    ~Derived()
    {
        cout<<"inside derived destructor\n";
    }

    void gun()
    {
        cout<<"inside gun of derived\n";
        cout<<"Accessing base class protected members in the derived class "<<endl;
        cout<<i<<endl;
        cout<<j<<endl;
    }

};

int main()
{
    cout<<"inside main\n";

    Derived dobj;

    cout<<"size of base class object is: "<<sizeof(Base)<<"\n";                     //8
    cout<<"size of derived class object is: "<<sizeof(Derived)<<"\n";               //12

    // cout<<dobj.i<<"\n";               // ERROR : protected members only accessible inside the base class or inside derived class only .
    // cout<<dobj.j<<"\n";              // 
    cout<<dobj.x<<"\n";               //0

    dobj.gun();

    cout<<"end of main\n";

    return 0;
}