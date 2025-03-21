#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bogoSort(int array[], int arrayLength);
void shuffle(int array[], int arrayLength);
void swap(int *a, int *b);
int isSorted(int array[], int n);
void printArray(int array[], int size);

int main(void)
{
    int arr[] = {23, 15, 22, 34, 11, 83, 45, 50};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    srand(time(NULL));
    printf("Given array is: \n");
    printArray(arr, arrLength);
    bogoSort(arr, arrLength);
    printf("sorted array is: \n");
    printArray(arr, arrLength);
}

void bogoSort(int array[], int arrayLength)
{
    do
    {
        shuffle(array, arrayLength);
        // remove comments for see shuffled arrays
        // printf("shuffle array \n");
        // printArray(array, arrayLength);

    } while (!isSorted(array, arrayLength));
}

void shuffle(int array[], int arrayLength)
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
int isSorted(int array[], int n)
{
    while (--n >= 1)
    {
        if (array[n] < array[n - 1])
        {
            return 0;
        }
    }
    return 1;
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}
