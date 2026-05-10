#include<iostream>
using namespace std;

struct Demo
{
    int i ;
    float f ;
    int *ptr;                           // structure can also store pointer

};

int main()
{
    struct Demo dobj;

    dobj.i = 11;
    dobj.f = 11.11;

    dobj.ptr = &dobj.i;

    cout<<*dobj.ptr<<endl;                    // accessing value of i using pointer
    
    *(dobj.ptr) = 21;                         // reinitialize the value of i using pointer 

    cout<<"Updated value of i : "<<*dobj.ptr;

    
    return 0;
}