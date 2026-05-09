#include<iostream>
using namespace std ;

int main()
{
    int iCounter = 0;
    int size =0;

    int arr[] ={10,20,30,40,50,60,70,80,90};

    int *ptr = arr;

    

   // Accessing array elements using pointer 
   size = sizeof(arr) / sizeof(arr[0]);
    for (iCounter=0; iCounter <size ;iCounter++)
    {
        cout<<"Value at index "<<iCounter
        <<":"<<*(ptr+iCounter)
        <<"  Address :"<<(ptr+1)<<"\n";
    }

    // Increment pointer 
    cout<<"Original Value :"<<*ptr<<"\n";

    ptr = ptr +5;                                                // increment pointer by five
    cout<<"Value after Increment :"<<*ptr<<"\n";

    //Decrement pointer 

    cout<<"Original value :"<<*ptr<<"\n";

    ptr = ptr -2 ;                                              // decrement pointer by two  

    cout<<"Value after Decrement  :"<<*ptr<<"\n";

    return 0;   
}
    