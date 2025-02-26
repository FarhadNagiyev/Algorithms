#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b);
void bubleSort(int array[], int size);
void printArray(int array[], int size);

int main(void)
{
    int arr[] = {1, 2, 3, 3, 4};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    bubleSort(arr, arrLength);
    printArray(arr, arrLength);
}

void bubleSort(int array[], int size)
{

    bool listSorted = false;

    while (!listSorted)
    {
        int swappCount = 0;
        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap(&array[i], &array[i + 1]);
                swappCount = swappCount + 1;
            }
        }
        if (swappCount == 0)
        {
            listSorted = true;
            printf("List Sorted \n");
        }
        size--;
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