#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int isSorted(int array[], int n);
void printArray(int array[], int size);
void bozoSort(int array[], int arrayLength);
void swap(int array[], int arrayLength);
int main(void)
{
    int arr[] = {23, 15, 22, 34, 11, 83, 45, 50};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    srand(time(NULL));
    printf("Given array is: \n");
    printArray(arr, arrLength);
    bozoSort(arr, arrLength);
    printf("sorted array is: \n");
    printArray(arr, arrLength);
}

void bozoSort(int array[], int arrayLength)
{
    int attempts = 0, maxAttempts = 1000000;
    while (!isSorted(array, arrayLength))
    {
        swap(array, arrayLength);
        attempts++;
        if (attempts >= maxAttempts)
        {
            printf("Sorting took too long. Stopping.\n");
            return;
        }
    }
}

void swap(int array[], int arrayLength)
{
    int n1 = rand() % arrayLength;
    int n2;
    do
    {
        n2 = rand() % arrayLength;
    } while (n1 == n2);
    int temp = array[n1];
    array[n1] = array[n2];
    array[n2] = temp;
}
int isSorted(int array[], int n)
{

    for (int i = 1; i < n; i++)
    {
        if (array[i] < array[i - 1])
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