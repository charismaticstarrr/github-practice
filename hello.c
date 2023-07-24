#include<stdio.h>

    int main(){
     int age;
     printf("enter age");
     scanf("%d",&age);
     if (age>18)
     {
        printf("adult\n");
        printf("they can vote\n");
        printf("they can drive\n");
        printf("responsibility\n");

     }
     else{
        printf("underage\n");
        printf("they can't vote\n");
     }
     printf("thankyou\n");

return 0;
}
