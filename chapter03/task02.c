#include <stdio.h>
int main(void)
{
    int var1;
    printf("Введите номер символа ASCII:\n");
    scanf(" %d", &var1);
    getchar();
    printf("По коду в таблице  ASCII %d = %c\n", var1, var1);
    return 0;
}
