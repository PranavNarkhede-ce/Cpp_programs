#include<iostream>
#pragma pack (1)                                // it tells the compiler to allocate the memory in terms of 1 byte

using namespace std ;

struct Demo
{
    char c;                                     // 1 byte
    int i ;                                     // 4 byte
    float f;                                    // 4 byte
    double d;                                   // 8 byte

};


int main()
{
    struct Demo dobj;

    cout<<"Size of structure :"<<sizeof(dobj)<<endl;        // output is 17

    return 0;
}