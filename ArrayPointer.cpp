#include<iostream>
using namespace std ;

int main()
{
    int arr[5] ;
    int *p = arr;

    // initializing array elements using the pointer 
    *(p+0) = 10;
    *(p+1) = 10;
    *(p+2) = 10;
    *(p+3) = 10;
    *(p+4) = 10;

    

    // ways to access array elements
    cout<<arr[2]<<"\n";
    cout<<*(arr +2)<<"\n";
    cout<<*(2+arr)<<"\n";
    cout<<2[arr]<<"\n";


    return 0;
}