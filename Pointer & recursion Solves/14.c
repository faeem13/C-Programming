// WAP that will get the largest element of an array using recursion
#include <stdio.h>
int largestElement(int *p, int n)
{
    if (n == 0)
    {
        return 0;
    }
    int max = largestElement(p + 1, n - 1);
    return *p > max ? *p : max;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Largest element in the array is %d\n", largestElement(arr, 5));
    return 0;
}