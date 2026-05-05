// my practice program of static and non static 

#include<iostream>
using namespace std;

class demo
{
    public:
        int i , j ;
        static int k;

        demo()
        {
            i = 0;
            j = 0;
        }

        void fun()
        {
            cout<<"inside non static fun method "<<"\n";
            cout<<"value of i:"<<i<<"\n";
            cout<<"value of j:"<<j<<"\n";
            cout<<"value of k:"<<k<<"\n";
        }

        static void gun()
        {
            cout<<"inside static method gun"<<"\n";
            cout<<"value of k:"<<demo::k<<"\n";

        }

};

int demo ::k=11;

int main()
{
    cout<<"inside main function"<<"\n";

    demo::gun();

    demo dobj;
    dobj.fun();

    return 0 ;
}