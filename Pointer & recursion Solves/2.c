//WAP that will find the maximum number between two numbers using a pointer.
#include <stdio.h>
int main()
{
    int a, b;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("Enter two numbers: ");
    scanf("%d %d", p1, p2);
    if (*p1 > *p2)
    {
        printf("Maximum number is %d\n", *p1);
    }
    else
    {
        printf("Maximum number is %d\n", *p2);
    }
    return 0;
}