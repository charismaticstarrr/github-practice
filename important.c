#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b;
    printf("enter number : ");
    scanf("%d\n", &a);
    printf("enter number : ");
    scanf("%d\n", &b);
    int s = sum(a, b);
    printf("sum %d\n", s);
     return 0;
}
int sum(int a, int b)
{
    return a + b;
}
