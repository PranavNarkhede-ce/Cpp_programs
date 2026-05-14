#include<iostream>
using namespace std ; 

class Base
{
    public:
        int i , j ;

        void fun()
        { cout<<"inside base fun\n";  }

        virtual void gun()
        { cout<<"inside base gun\n";  }

        virtual void sun()
        { cout<<"inside base sun\n";  }

};          // 8 bytes

class Derived : public Base
{
    public:
        int x , y ;

        void fun()                                              // redefination of fun 
        { cout<<"inside derived fun\n";   }

        void sun()                                              // redefination of sun 
        { cout<<"inside derived sun\n";   }

        virtual void run()                                              // defination  
        { cout<<"inside derived run\n";   }

};          // 16 bytes

int main()
{
    Base *bp = new Derived();               // Upcasting

    bp->fun();          // base fun
    bp->gun();          // base gun
    bp->sun();          // derived sun
    // bp->run();          // error 

    return 0 ;
}