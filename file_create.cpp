#include<iostream>
#include<fcntl.h>
#include<unistd.h>

using namespace std;

int main()
{
    int fd = 0 ;

    fd = creat("Pranav.txt",0777);

    if(fd == -1)
    {
        cout<<"File is not created \n";
    }
    else
    {
        cout<<"File gets successfully created " << fd <<"\n" ;
    }

    return 0;
}