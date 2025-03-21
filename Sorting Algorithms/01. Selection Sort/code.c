#include <stdio.h>

void swap(int *a, int *b);
void selectionSort(int array[], int size);
void printArray(int array[], int size);

int main(void)
{
    int arr[] = {1, 7, 3, 6, 1};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, arrLength);
    printf("Sorted array in Acsending Order:\n");
    printArray(arr, arrLength);
}

void selectionSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_index = step;
        for (int i = step + 1; i < size; i++)
        {
            if (array[i] < array[min_index])
            {
                min_index = i;
            }
        }
        swap(&array[min_index], &array[step]);
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