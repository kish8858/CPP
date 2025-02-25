#include<iostream>
using namespace std;

void update(int n){
    n++;
}
void update1(int& n){
    n++;
}
/*
int& func(int n){
    //can we pass the reference value? -->> NO, becasue the scope will be ended after execution.(BAD PRACTICE)
    int num = n;
    int& ans = num;
    
    return ans;
}
*/


int getSum(int* arr, int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Value is : " << arr[i] << " OR " << *(arr + i) << " Address is : " << arr + i << " OR " << &arr[i] << endl;
        ans += arr[i];
    }
    return ans;
    
}
int main(){
/*
    int i = 5; // Reference Variable : Same memory, different name
    int &j = i; // create reference variable

    cout << i << endl; // 5
    i++;
    cout << i << endl; // 6
    j++;
    cout << i << endl; // 7
*/
    //Why???... --> for passing the reference in function to get actual address(pass by reference) not copy of the value(Pass by value)

/*
    int n = 5;
    cout << n << endl; // 5
    update(n);
    cout << n << endl; // 5
    update1(n);
    cout << n << endl; // 6
*/


    int n = 5; 
    //cin>> n; // Bad practice, the value should be know at compile time 
    //int arr[n]; // Static Memory Allocation //when we are using this syntax then array will create in stack area and this array can create memory in stack and if stack memory is less than n then program will be crashed.
    // To overcome this scenario we can create memory in heap area by using (new) keyword

    /* Static Memory Allocation using stack and Dynamic Memory Allocation using Heap */
    
    char *ch  = new char; //When we are using this syntax then char will create in Heap area
    cout << sizeof(*ch) << endl; // 1 // new char returns address.

    int *arr = new int[n];
    cout << sizeof(*arr) << endl;// 4

    cout << getSum(arr, n) << endl;
    delete ch;// for single element deletion
    delete [] arr;// for array deletion


    //Diffrence b/w SMA and DMA:
    //1. int arr[50]                |   int *arr = new int[50]
    //2. 50 * 4 = 200 bytes         |   8 + 200 = 208
    //3. memory automatic release   |   manually release and free

    int j; 
    cout << "Enter the value : " << endl;
    cin>> j;
    cout << "The value is : " << j << endl;
    
    return 0;
}