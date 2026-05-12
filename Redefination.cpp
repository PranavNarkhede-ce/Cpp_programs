#include<iostream>
using namespace std ; 

class Base
{
    public:
        int i , j ;

        void fun()
        { cout<<"inside base fun\n";  }

        void gun()
        { cout<<"inside base gun\n";  }

        void sun()
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

         void run()                                              // defination  
        { cout<<"inside derived run\n";   }

};          // 16 bytes

int main()
{
    Base *bp =NULL;
   
    bp =  new Derived();             // upcasting 

    bp->fun();                      // base fun because pointer is of fun
    bp->gun();                      // base gun
    bp->sun();                      // base sun
    //bp->run();                      //error 

    return 0 ;
}