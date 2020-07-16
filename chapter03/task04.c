#include <stdio.h>
#include <inttypes.h>
int main()
{
    float var1;
    printf("Введите число = 64,25\n");
    scanf("%f", &var1);
    printf(" Число %f оно же %a и %e\n", var1, var1, var1);
    return 0;