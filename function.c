#include <stdio.h>
void printHello();//function prototype
int main()
{

    printHello();
    printHello();//function call
    printHello();
    return 0;
}//function defition
void printHello()
{
    printf("hello");
}