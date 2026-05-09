
#include<iostream>
using namespace std;

int main()                          
{
    signed int i = -10;                 // bydefault signed 
    unsigned int j = 10;                // cannot initialize negative value 
   
    cout<<"size of signed int i :"<<sizeof(i)<<"\n";
    cout<<"size of unigned int j :"<<sizeof(j)<<"\n";


    return 0;
}