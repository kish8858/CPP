#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return isSorted(arr + 1, size - 1);
    }
}
int sumOfArray(int *arr, int size)
{

    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int sum = arr[0] + sumOfArray(arr + 1, size - 1);
    return sum;
}

void printLS(int arr[], int size)
{
    cout << "Size of array : " << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int *arr, int size, int key)
{
    printLS(arr, size);
    if (size == 0)
    {
        return false;
    }
    if (key == arr[0])
    {
        return true;
    }
    return linearSearch(arr + 1, size - 1, key);
}

void printBS(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool BinarySearch(int *arr, int s, int e, int key)
{
    printBS(arr, s, e);
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;
    cout << "Value of arr mid is : " << arr[mid] << endl;
    if (arr[mid] == key)
    {
        return true;
    }
    else if (arr[mid] < key)
    {
        s = mid + 1;
        return BinarySearch(arr, s, e, key);
    }
    else
    {
        e = mid - 1;
        return BinarySearch(arr, s, e, key);
    }
}

int main()
{
    // int arr[] = {1, 2, 36, 4, 5, 7};
    //  cout << isSorted(arr, 6) << endl;

    // int arr1[] = {1, 2, 3, 4, 5, 7};
    // cout << sumOfArray(arr1, 6);

    /*
    int arr2[] = {3, 5, 1, 2, 6};
    bool isPresent = linearSearch(arr2, 5, 6);
    if (isPresent)
    {
        cout << "Present" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    */

    int arr3[] = {2, 4, 6, 10, 14, 18};
    bool isPresent = BinarySearch(arr3, 0, 5, 16);
    if (isPresent)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}