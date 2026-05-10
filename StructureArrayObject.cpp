#include<iostream>
using namespace std ;

struct Demo
{
    int i ;
    float f ;
};

int main()
{
    struct Demo arr[3];         // array of 3 objects

    arr[0].i = 10;              // initializing elements of each object of structure
    arr[0].f = 10.11f;

    arr[1].i = 20;
    arr[1].f = 20.11f;

    arr[2].i = 30;
    arr[2].f = 30.11f;

    cout<<"Size of structure :"<<sizeof(arr)<<endl;

    cout<<"Accessing elements of stucture :"<<endl;
    cout<<" value of arr[0] .i  "<<arr[0].i<<endl;
    cout<<" value of arr[1] .f  "<<arr[1].f<<endl;
    cout<<" value of arr[2] .i  "<<arr[2].i<<endl;


    return 0;
}