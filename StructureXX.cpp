#include<iostream>
using namespace std;

struct Demo                     
{
    int i;                      
    float j;
};

int main()
{
    struct Demo dobj;          

    dobj.i = 10;
    dobj.j = 20.0f;

    cout<<"Size of structure :"<<sizeof(Demo)<<endl;

    cout<<"Value of variable i :"<<dobj.i<<endl;
    cout<<"Value of variable j :"<<dobj.j<<endl;

    return 0;
}