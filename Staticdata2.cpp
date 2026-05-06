#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;              // non static           //instance variable 
        int j;              // non static
        static int k;       // static

        Demo()
        {
            i = 0;
            j = 0;
        }

};

int Demo  :: k = 11;                    //class variable 

int main()
{   
    Demo dobj;
    cout<<Demo::k<<"\n";            //11

    cout<<dobj.i<<"\n";             //0
    cout<<dobj.j<<"\n";             //0

    return 0;
}