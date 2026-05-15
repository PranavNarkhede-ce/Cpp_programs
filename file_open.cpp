#include<iostream>
#include<fcntl.h>
#include<unistd.h>

using namespace std;

int main()
{
    int fd = 0 ;

    fd = open("Pranav.txt",O_RDWR);

    if(fd == -1)
    {
        cout<<"File is not opened \n";
    }
    else
    {
        cout<<"File gets successfully open " << fd <<"\n" ;

    }

    return 0;
}