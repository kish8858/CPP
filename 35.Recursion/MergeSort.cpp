#include <iostream>
using namespace std;

void mergeArray(int arr[], int start, int end)
{
    int mid = (start + end) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy value start
    int mainIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndex++];
    }
    // copy value end

    // Merge two sorted array

    int index1 = 0;
    int index2 = 0 ;
    mainIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainIndex++] = first[index1++];
        }
        else
        {
            arr[mainIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainIndex++] = second[index2++];
    }
    delete []first;
    delete []second;
}

void mergeSort(int arr[], int start, int end)
{

    // base case
    if (start >= end)
    {
        return;
    }
    
    // Recursive function
    int midIdx = (start + end) / 2;
    
    // Left
    mergeSort(arr, start, midIdx);
    // Right
    mergeSort(arr, midIdx + 1, end);
    // MergeSorted Array

    mergeArray(arr, start, end);
}

int main()
{
    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;
    return 0;
}


// H.W. : Inversion Count