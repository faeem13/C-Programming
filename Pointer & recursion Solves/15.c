// WAP that will print even or odd numbers in given range using recursion.
#include <stdio.h>
void evenOdd(int start, int end)
{
    if (start > end)
    {
        return;
    }
    if (start % 2 == 0)
    {
        printf("%d is even\n", start);
    }
    else
    {
        printf("%d is odd\n", start);
    }
    evenOdd(start + 1, end);
}
int main()
{
    int start, end;
    printf("Enter the range: ");
    scanf("%d %d", &start, &end);
    evenOdd(start, end);
    return 0;
}