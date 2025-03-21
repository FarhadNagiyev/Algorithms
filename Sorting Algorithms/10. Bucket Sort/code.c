#include <stdio.h>

#define BUCKET_SIZE 10

void insertionSort(float array[], int size);
void bucketSort(float inputArray[], int size);
void printArray(float array[], int size);
void placeElementsInBuckets(int size, float inputArray[], int bucketCount[], float buckets[][size]);
void sortEachBucket(int size, int bucketCount[], float buckets[][size]);
void gatherBucketsInMainArray(int size, int bucketCount[], float inputArray[], float buckets[][size]);

int main(void)
{
    float inputArray[] = {0.37, 0.23, 0.25, 0.98, 0.1};
    int size = sizeof(inputArray) / sizeof(inputArray[0]);

    printf("Input: ");
    printArray(inputArray, size);

    bucketSort(inputArray, size);
    printf("Output: ");
    printArray(inputArray, size);

    return 0;
}

void bucketSort(float inputArray[], int size)
{
    float buckets[BUCKET_SIZE][size];
    int bucketCount[BUCKET_SIZE] = {0};

    placeElementsInBuckets(size, inputArray, bucketCount, buckets);
    sortEachBucket(size, bucketCount, buckets);
    gatherBucketsInMainArray(size, bucketCount, inputArray, buckets);
}

void placeElementsInBuckets(int size, float inputArray[], int bucketCount[], float buckets[][size])
{
    for (int i = 0; i < size; i++)
    {
        int index = inputArray[i] * BUCKET_SIZE;
        buckets[index][bucketCount[index]++] = inputArray[i];
    }
}

void sortEachBucket(int size, int bucketCount[], float buckets[][size])
{
    for (int i = 0; i < BUCKET_SIZE; i++)
    {
        if (bucketCount[i] > 0)
        {
            insertionSort(buckets[i], bucketCount[i]);
        }
    }
}

void gatherBucketsInMainArray(int size, int bucketCount[], float inputArray[], float buckets[][size])
{
    int idx = 0;
    for (int i = 0; i < BUCKET_SIZE; i++)
    {
        for (int j = 0; j < bucketCount[i]; j++)
        {
            inputArray[idx++] = buckets[i][j];
        }
    }
}

void insertionSort(float array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        float key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void printArray(float array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%.2f  ", array[i]);
    }
    printf("\n");
}
