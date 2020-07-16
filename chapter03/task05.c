#include <stdio.h>
int main()
{
    int age;
    printf("Сколько Вам лет?\n");
    scanf("%d", &age);
    printf("Вы прожилы %f секунд", age * 3.156e07);
    return 0;
}
