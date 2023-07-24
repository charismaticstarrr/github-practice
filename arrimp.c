#include<stdio.h>

    int main(){
        int aadhar[5];
    //input
    int *ptr=&aadhar[0];
    for (size_t i = 0; i <5; i++)
    {
        /* code */printf("%d index",i);
        scanf("%d",(ptr+1));
    }
    //output
    for (size_t i = 0; i < 5; i++)
    {
        /* code */printf("%d index =%d\n",i,*(ptr+i));
    }
    
return 0;
}