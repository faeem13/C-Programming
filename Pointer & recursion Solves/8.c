//WAP that will print the elements of an array inreverse indexed order
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;
    p = arr + 4;
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i + 1, *p);
        p--;
    }
    return 0;
}