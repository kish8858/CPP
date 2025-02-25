#include<iostream>
using namespace std;

void mergeArray(int arr1[], int arr2[], int n1, int n2){

    int n = n1 + n2;
    int arr[n];
    int mainIndex = 0;
    int index1 = 0;
    int index2 = 0;

    while(index1 < n1 && index2 < n2){
        if(arr1[index1] < arr2[index2]){
            arr[mainIndex++] = arr1[index1++];
        }
        else{
            arr[mainIndex++] = arr2[index2++];
        }
    }

    while( index1 < n1){
        arr[mainIndex++] = arr1[index1++];
    }
    while( index2 < n2){
        arr[mainIndex++] = arr2[index2++];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;
    //return arr;
}

int main()
{
    int arr [] = { 12,10,3,4,9};
    int arr1[] = {1,22,8,67};
    
    mergeArray(arr, arr1, 5, 4);

}