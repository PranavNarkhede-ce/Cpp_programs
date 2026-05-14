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
    cout<<sizeof(Base)<<"\n";               // 8

    cout<<sizeof(Derived)<<"\n";            // 16

    return 0 ;
}