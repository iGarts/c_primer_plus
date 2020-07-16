#include <stdio.h>
int main()
{
    char name[20];
    char surname[20];
    printf("Введите Имя и Фамилию(через пробел)\n");
    scanf("%s %s", name, surname);
    printf("%s %s", surname, name);
    return 0;
}