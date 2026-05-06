#include<iostream>
using namespace std ;

class demo
{
    public:
        unsigned int i = 0;

        void display()
        {
            for(int i = 1;i<=4;i++)
            {
                cout<<i<<":"<<"Jay Ganesh ... "<<"\n";
            }
        }
};


int main()
{
    demo dobj;
    dobj.display();
    return 0;
}
    