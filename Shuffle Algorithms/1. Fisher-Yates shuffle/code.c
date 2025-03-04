#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fisherYatesShuffle(int array[], int arrayLength);
void swap(int *a, int *b);
void printArray(int array[], int size);
int main(void)
{
    int arr[] = {23, 15, 22, 34, 11, 83, 45, 50};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    srand(time(NULL));

    // print given array
    printf("Given array is: \n");
    printArray(arr, arrLength);

    // call shuffle function
    fisherYatesShuffle(arr, arrLength);

    // print results
    printf("Shuffled array id: \n");
    printArray(arr, arrLength);
}
void fisherYatesShuffle(int array[], int arrayLength)
{
    for (int i = arrayLength - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);

        swap(&array[i], &array[j]);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}
