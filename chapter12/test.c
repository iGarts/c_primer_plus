#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
void rand_arr(int *,int);
void sort(int *,int);
void print_arr(int *,int);


int main(void)
{
    time_t t;
    int temp;
    int arr[SIZE];
    int counter = 0, reps = 0;
    srand((unsigned)time(&t));
    for (int i = 0; i < SIZE; i++)
        arr[i] = rand() % 9;
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    for (int i = 0; i < SIZE; i++)
        printf("%d", arr[i]);
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            counter++;
            reps++;
            continue;
        }
        //if (reps != 0)
            printf("%d - %d\n", arr[i], reps + 1);
        reps = 0;
        //printf("\n");
    }
    return 0;
}
