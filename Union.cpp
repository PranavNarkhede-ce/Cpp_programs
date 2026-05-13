#include<iostream>
using namespace std ;

union Demo
{
    double d ;
    float f ;
};

int main()
{
    union Demo dobj;

    cout<<"Size of union :  "<<sizeof(dobj)<<endl;          // size of union is summation of its largest member 

    return 0 ;
}

// All the points of structure are same here except memory allocation.