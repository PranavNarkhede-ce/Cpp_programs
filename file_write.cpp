#include<iostream>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

int main()
{
    int fd = 0 ;
    int ret = 0 ;
    char arr[] = "India is my country";

    fd = open("pranav.txt" , O_RDWR);

    if(fd == -1)
    {
        cout<<"file not get opened \n";
    }
    else
    {
        cout<<"file get successfully open with fd :"<<fd<<"\n";

        ret = write(fd, arr , 19);

        cout<<ret<<"bytes gets written into the file \n";

    }
    close(fd);
    
    return 0;
}