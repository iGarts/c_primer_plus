#include <stdio.h>
void one_three(void);
void two(void);
int main(void)
{
    printf("Начинаем!\n");
    one_three();
    printf("Порядок!\n");
}

void one_three()
{
    printf("Один\n");
    two();
    printf("Три\n");
}

void two()
{
    printf("Два\n");
}