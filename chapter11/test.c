#include <stdio.h>
#include <string.h>
#define SIZE 20
int main(void)
{
    char *arr1 = "";
    char *arr2 = "kashka";

    int a = strlen(arr1);
    printf("%d\n", a);
    int b = strlen(arr2);
    printf("%d\n", b);
    strncpy(arr1, arr2, b);
    puts(arr1);

    return 0;
}