#include <stdio.h>

void swap(int *a, int *b);
void printArray(int array[], int size);
void insertionSort(int array[], int size);
int sort(int array[],int i);
int main(void)
{
    int arr[]={22,34,1,2};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr,arrLength);
    printf("Sorted array: \n");
    printArray(arr,arrLength);
}


void insertionSort(int array[], int size)
{
    int sorted_Number_Index=0;

    for (int key=sorted_Number_Index+1; key<size;key++)
    {
        sort(array,key);
    }
    
   
    
}
int sort(int array[],int i)
{
    if(i==0)
    {

    }
    else if(array[i-1]>array[i])
    {
        swap(&array[i], &array[i - 1]);
        sort(array,i-1);
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