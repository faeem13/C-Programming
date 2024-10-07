// WAP that will compute the sum of all elements in anarray using pointers
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;
    int sum = 0;
    p = arr;
    for (int i = 0; i < 5; i++)
    {
        sum += *p;
        p++;
    }
    printf("Sum of all elements in the array is %d\n", sum);
    return 0;
}