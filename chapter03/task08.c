#include <stdio.h>
int main()
{
    float volume;
    float tea_spoon, tab_spoon, ounce, cup, pinta;

    printf("Введите количество чашек\n");
    scanf(" %f", &volume);
    printf("%f чашек равно  %f пинт, %f унций, %f столовых ложек, %f чайных ложек\n", volume, volume / 2, volume / 8, volume / 8 / 2, volume / 48);
    return 0;
}