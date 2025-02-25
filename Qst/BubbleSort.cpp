#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){

    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}

void BubbleSort(int arr[], int n){

    for(int i = 1; i < n ; i++){
        for(int j = 0 ; j < n - i ; j++){
            if(arr[j]  > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] =  {2,1,5,4,3, 64,1256,6};
    //SelectionSort(arr, 5);
    BubbleSort(arr, 8);

    for (int i = 0 ;i < 8 ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}