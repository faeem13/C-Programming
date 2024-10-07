// WAP that will calculate the length of the string using pointers.
#include <stdio.h>
int main()
{
    char str[100];
    char *p;
    int length = 0;
    printf("Enter a string: ");
    gets(str);
    p = str;
    while (*p != '\0')
    {
        length++;
        p++;
    }
    printf("Length of the string is %d\n", length);
    return 0;
}