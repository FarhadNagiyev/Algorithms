#include <stdio.h>

void quickSort(int array[], int start, int end);
void swap(int *a, int *b);
void printArray(int array[], int size);
int partition(int array[], int start, int end);
int main(void)
{
    int inputArray[] = {2, 5, 7, 6, 3, 4};
    int length = sizeof(inputArray) / sizeof(inputArray[0]);
    printf("Input array \n");
    printArray(inputArray, length);
    quickSort(inputArray, 0, length - 1);
    printf("Sorted array \n");
    printArray(inputArray, length);
}
void quickSort(int array[], int start, int end)
{
    if (start < end)
    {

        int partitionPoint = partition(array, start, end);

        // left
        quickSort(array, start, partitionPoint - 1);

        //  right
        quickSort(array, partitionPoint + 1, end);
    }
}
int partition(int array[], int start, int end)
{
    int pivot = array[end];

    int i = (start - 1);
    for (int j = start; j < end; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[end]);
    return (i + 1);
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