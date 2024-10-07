// WAP that will print the array elements using recursion.
#include <stdio.h>
void printArray(int *p, int n)
{
    if (n == 0)
    {
        return;
    }
    printArray(p + 1, n - 1);
    printf("%d\n", *p);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    return 0;
}