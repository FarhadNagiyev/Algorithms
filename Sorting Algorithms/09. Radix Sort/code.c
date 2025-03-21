#include <stdio.h>
#include <stdlib.h>

int findMax(int array[], int n);
void radixSort(int array[], int n, int max);
void countingSort(int array[], int size, int place);
void countOccurrences(int array[], int count[], int size, int place);
void sumCounts(int count[]);
void printArray(int array[], int size);

int main()
{
    int arr[] = {324, 343, 120, 839, 292, 388};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, size);
    radixSort(arr, size, max);
    printArray(arr, size);
    return 0;
}

int findMax(int array[], int n)
{
    int max = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

void radixSort(int array[], int size, int max)
{
    for (int place = 1; max / place > 0; place *= 10)
    {
        countingSort(array, size, place);
    }
}

void countingSort(int array[], int size, int place)
{
    int count[10] = {0};
    int *output = (int *)malloc(size * sizeof(int));
    if (!output)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    countOccurrences(array, count, size, place);
    sumCounts(count);

    for (int i = size - 1; i >= 0; i--)
    {
        int index = (array[i] / place) % 10;
        output[count[index] - 1] = array[i];
        count[index]--;
    }

    for (int i = 0; i < size; i++)
    {
        array[i] = output[i];
    }

    free(output);
}

void countOccurrences(int array[], int count[], int size, int place)
{
    for (int i = 0; i < size; i++)
    {
        int index = (array[i] / place) % 10;
        count[index]++;
    }
}

void sumCounts(int count[])
{
    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}
