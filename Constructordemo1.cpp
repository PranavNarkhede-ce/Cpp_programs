#include<iostream>
using namespace std;

class Marvellous 
{
    public:
    int No1,No2;

    Marvellous()                //default constructor
    {
        cout<<"Inside default constructor \n";
        int No1=0;
        int No2=0;
    }
   
    
    Marvellous(int A ,int B)                    //parametrise constructor 
    {
        cout<<"Inside parametrise constructor \n";
        No1=A;
        No2=B;
    }
    
    Marvellous(Marvellous &ref)
    {
        cout<<"inside copy constructor \n";
        No1=ref.No1;
        No2=ref.No2;
    }

    ~Marvellous()
    {
        cout<<"Inside destructor \n";
    }
};

int main()
{
    cout<<"inside main\n";

    Marvellous mobj1;           //default constructor object 
    Marvellous mobj2(11,21);         //parametrise constructor object
    Marvellous mobj3(mobj2);        //copy consturctor objecct
    
    cout<<"end of main\n";

    return 0;
}               // all destructors gets called