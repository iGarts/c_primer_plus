#include <stdio.h>
int main()
{
    double mass_molokula = 3.0e-23;
    int kvart = 950;
    int volume;
    printf("Введите обьем воды в квартах\n");
    scanf("%d", &volume);
    printf("В %d квартах воды содержится %le молекул", volume, mass_molokula * kvart * volume);
    return 0;
}