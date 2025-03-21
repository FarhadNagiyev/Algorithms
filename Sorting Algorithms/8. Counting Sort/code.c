#include <stdio.h>
#include <stdlib.h>

int findMax(int array[], int size);
int *createCountingArray(int max);
void countOccurrences(int array[], int countArr[], int size);
void sumCounts(int countArr[], int max);
void sortArray(int output[], int array[], int count[], int size);
void printArray(int array[], int size);
int *countingSort(int max, int array[], int size);

int main(void)
{
    int array[] = {1, 7, 3, 6, 1};
    int size = sizeof(array) / sizeof(array[0]);
    int max = findMax(array, size);

    int *output = countingSort(max, array, size);
    if (!output)
    {
        printf("Sorting failed!\n");
        return 1;
    }

    printArray(output, size);

    free(output);
    return 0;
}

int *countingSort(int max, int array[], int size)
{
    int *countArr = createCountingArray(max);
    if (!countArr)
    {
        printf("Alloc fail in countArr[]!\n");
        return NULL;
    }

    countOccurrences(array, countArr, size);
    sumCounts(countArr, max);

    int *output = (int *)malloc(size * sizeof(int));
    if (!output)
    {
        printf("Alloc fail in output[]!\n");
        free(countArr);
        return NULL;
    }

    sortArray(output, array, countArr, size);

    free(countArr);

    return output;
}

int findMax(int array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int *createCountingArray(int max)
{
    return (int *)calloc(max + 1, sizeof(int));
}

void countOccurrences(int array[], int countArr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        countArr[array[i]]++;
    }
}

void sumCounts(int countArr[], int max)
{
    for (int i = 1; i <= max; i++)
    {
        countArr[i] += countArr[i - 1];
    }
}

void sortArray(int output[], int array[], int count[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
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
