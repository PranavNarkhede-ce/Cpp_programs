#include<iostream>
using namespace std ;

struct Demo
{
    int i ;
    float f ;
    Struct Demo dobj ;              // ERROR : we cannot create the object of structure inside the structure
};

struct Demo dobj;                   // we can create object of sturcture outside of the structure

int main()
{
    struct Demo dobj;               // we also create inside entry point function
    return 0;
}