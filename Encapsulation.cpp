#include<iostream>
using namespace std;

class Marvellous 
{
    public:
        int NO1,No2;


    void Fun()
    {
        cout<<"inside fun\n";
    }

    void Gun()
    {
        cout<<"inside gun\n";
    }
};

int main()
{
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";
    mobj1.Fun();
    mobj2.Fun();

    return 0;
}