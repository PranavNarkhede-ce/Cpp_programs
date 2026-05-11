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

};

int main()
{
    Base bobj;

    //Derived dobj;

    return 0;
}