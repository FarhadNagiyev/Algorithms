#include <stdio.h>

int binarySearch(int array[], int targetNumber, int low, int high);

int main(void)
{
    int arr[] = {1, 7, 3, 6, 1};
    int targetNumber = 3;
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    int indexOfNumber = binarySearch(arr, targetNumber, 0, arrLength - 1);
    if (indexOfNumber == -1)
    {
        printf("Number Not Found");
    }
    else
    {

        printf("Index of target number: %i", indexOfNumber);
    }
}

int binarySearch(int array[], int targetNumber, int low, int high)
{

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == targetNumber)
        {
            return mid;
        }
        else if (array[mid] < targetNumber)
        {
            low = mid++;
        }
        else
        {
            high = mid--;
        }
    }
    return -1;
}