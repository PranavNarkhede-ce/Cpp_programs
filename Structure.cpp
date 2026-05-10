#include<iostream>
using namespace std;

struct Demo                     // creating one structure
{
    int i;                      // members of structure
    float j;
     // float k = 12  ;         // inside structure we cannot initialize its member
};

int main()
{
    struct Demo dobj;           // allocating memory to structure

    return 0;
}