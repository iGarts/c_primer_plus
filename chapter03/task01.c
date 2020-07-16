#include <stdio.h>
int main()
{
    int var1 = 2147483647;
    float var2 = 3.402823466e+38;
    printf(" Переполнение var1 = %d выглядит так %d", var1, var1 * 2);
    printf(" Переполнение var2 = %f выглядит так %f", var2, var2 * 2);
    return 0;
}