// selection - if else 

#include<iostream>
using namespace std;

class demo
{
    public:
        int num = 0;
        
        int  calculate()
        {
            cout<<"enter any number:"<<"\n";
            cin>>num;

            if(num %2==0)
            {
                cout<<num<<" is even"<<"\n";
            }
            else
            {
                cout<<num<<" is odd "<<"\n";
            }
        }


};


int main()
{
    demo dobj;
    dobj.calculate();   

    return 0;
}