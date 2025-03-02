#include <stdio.h>

int linearSearch(int arr[], int arrLength, int targetNumber);

int main(void)
{
    int arr[] = {1, 7, 3, 6, 1};
    int targetNumber = 6;
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    int indexOfNumber = linearSearch(arr, arrLength, targetNumber);
    if (indexOfNumber == -1)
    {
        printf("Number Not Found");
    }
    else
    {

        printf("%i", indexOfNumber);
    }
}

int linearSearch(int arr[], int arrLength, int targetNumber)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == targetNumber)
        {
            return i;
        }
    }
    return -1;
}