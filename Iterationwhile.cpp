
#include<iostream>
using namespace std ;

class demo 
{
    public:
        int i =1;

        void display()
        {
              
            while(i<=4)
            {
                cout<<i<<":"<<"Jay Ganesh ... "<<"\n";
                i++;

            }
        }

};

int main()
{

    demo dobj;
    dobj.display();

    return 0;
}