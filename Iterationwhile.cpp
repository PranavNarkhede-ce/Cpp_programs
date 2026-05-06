// my practice program using iteration for loop

/*#include<iostream>
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
    */




// my program using iteration - while 
#include<iostream>
using namespace std ;

class demo 
{
    public:
        int i =0;

        void display()
        {
              i =1;
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