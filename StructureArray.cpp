#include<iostream>
using namespace std ;

struct Demo
{
    int i ;
    float f ;
    int arr[3];

};

int main()
{
    struct Demo dobj;

    dobj.i = 13;
    dobj.f = 23.0f;
    dobj.arr[0]= 11;                                            // initializing array elements
    dobj.arr[1]= 21;
    dobj.arr[2]= 31;

    cout<<"Size of structure :"<<sizeof(dobj)<<endl;            // 20

    cout<<"Element at index 1:"<<dobj.arr[1]<<endl;             // accessing array element 
    
    return 0;
}