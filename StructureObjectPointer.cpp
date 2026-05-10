#include<iostream>
using namespace std ;

struct Demo
{
    int i ;
    float f ;
};

int main()
{
    struct Demo dobj ;                          // allocate the memory to structure member's 

    struct Demo *ptr = &dobj;                   // create a pointer which points to the structure object 

    ptr->i = 10;                                // initialize the elements of structure using pointer
    ptr->f = 10.11f;

    cout<<"Address of structure :"<<&dobj<<endl;
    cout<<"Structure pointer pointing to address :"<<&ptr<<endl;

    cout<<"Accessing elements of structure using pointer :"<<endl;              // accessing using indirect accessing operator
    cout<<"Value of i:  "<<ptr->i<<endl;

    cout<<"Accessing elements of structure using object :"<<endl;
    cout<<"Value of f:  "<<dobj.f<<endl;

    return 0;
}