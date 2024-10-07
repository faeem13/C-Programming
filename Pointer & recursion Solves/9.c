//WAP that will display numbers 1 to 10 using recursion.
#include <stdio.h>
void display(int n)
{
    if (n == 0)
    {
        return;
    }
    display(n - 1);
    printf("%d\n", n);
}
int main()
{
    display(10);
    return 0;
}
