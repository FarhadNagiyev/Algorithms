#include <stdio.h>

void printArray(int array[], int size);
void merge(int array[], int l, int m, int arrayLenght);
void mergeSort(int array[], int startingIndex, int arraySize);
int main(void)
{
    int arr[] = {23, 15, 22, 34, 11, 83, 45, 50};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    printf("Given array is \n");
    printArray(arr, arrLength);

    mergeSort(arr, 0, arrLength - 1);

    printf("\nSorted array is \n");
    printArray(arr, arrLength);
    return 0;
}

void merge(int array[], int startingIndex, int divideIndex, int arrayLenght)
{
    int i, j, k;
    const int n1 = divideIndex - startingIndex + 1;
    const int n2 = arrayLenght - divideIndex;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
    {
        L[i] = array[startingIndex + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = array[divideIndex + 1 + j];
    }

    i = 0;
    j = 0;
    k = startingIndex;

    while (i < n1 && j < n2)
    {
        if (L[i] < R[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        array[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        array[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int startingIndex, int arraySize)
{
    if (startingIndex < arraySize)
    {
        int divideIndex = startingIndex + (arraySize - startingIndex) / 2;

        mergeSort(array, startingIndex, divideIndex);
        mergeSort(array, divideIndex + 1, arraySize);

        merge(array, startingIndex, divideIndex, arraySize);
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