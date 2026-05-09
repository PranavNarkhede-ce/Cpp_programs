#include<iostream>
using namespace std ;

int AddTwoNumber(int iNo1 ,int iNo2)                                    // function to add two integers
{
    return iNo1 +iNo2;
}

int MulTwoNumber(int iNo1 , int iNo2)                                   // function to multiply two integers
{
    return iNo1 * iNo2;
}


int main()
{
    int choice =0;

    int (* ptr) (int , int );                                           // create a pointer which points to the function

    cout<<"Enter 1 for Addition or Enter 2 for Multiplication: ";       // user enter choice
    cin>>choice;                                                        // store user's choice

    if(choice == 1)                                                     
    {
        ptr =AddTwoNumber;
    }
    else
    {
        ptr = MulTwoNumber;
    }

    cout<<ptr(4,6);                                                     // pass argument to the function

    return 0;
}