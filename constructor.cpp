// my practice program of constructor and destructor 

#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;

        Demo()
        {
            cout<<"inside default constructor"<<"\n";
            i = 0;
            j = 0;
            cout<<i<<"\n"<<j<<"\n";
        }

        Demo(int no1, int no2)
        {
            cout<<"inside parameterised constructor"<<"\n";

            i = no1;
            j = no2;
            cout<<i<<"\n"<<j<<"\n";
        }

        Demo(Demo &ref)
        {
            cout<<"inside copy constructor "<<"\n";
            i = ref.i;
            j = ref.j;
            cout<<i<<"\n"<<j<<"\n";
        }

        ~Demo()
        {
            cout<<"inside the destructor"<<"\n";
        }

};

int main()
{
    cout<<"inside main function "<<"\n";

    Demo dobj;
    Demo dobj1(10,11);
    Demo dobj2(dobj1);

    return 0;
}