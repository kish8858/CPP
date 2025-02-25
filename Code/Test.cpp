#include <iostream>
using namespace std;

bool Linear(int *arr, int n, int k){
    if(n == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    return Linear(arr + 1, n - 1, k);

}

int main(){
    int arr[] = {1, 2, 2, 4, 5, 7};
     cout << Linear(arr, 6, 7) << endl;
}