#include <iostream>
using namespace std;

void print(int *p)
{
    cout << p << endl;  // address
    cout << *p << endl; // value
}
void update(int *p){
    *p = *p + 1;
    p = p + 1;
}

int getSum(int *arr,int n){  // arr[] and *arr are the same because we are passing the first's element address to the function

    cout << "Size of arr : " << sizeof(arr) << endl; //i.e print 8(size of pointer)
    int sum = 0;
    for(int i = 0; i < n ; i++){
        sum += i[arr];
    }
    return sum;
}

int main()
{
    /*
    int arr[10] = {22,331,41,234};
    cout << arr << endl;     // arr is the address of first index of array. - line : A
    cout << arr[0] << endl;
    cout << &arr[0] << endl; // line and A and B are same - line : B
    cout << *arr << endl; //22
    cout << *arr + 10 << endl; //32
    cout << *(arr + 1) << endl; //331
    cout << (*arr) + 5 << endl; //27
    cout << arr[2] << endl;
    cout << *(arr + 2) << endl; //41

    int i = 3;
    cout << i[arr] << endl; // 234
    */
    
    /*
    int temp[10];
    cout << sizeof(temp) << endl; // 40
    for(int i = 0; i < 10 ; i++)
    {
        cout << temp[i] << endl;
    }
    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl; //ptr means address
    cout << sizeof(*ptr) << endl; //"*"ptr means value present at address
    cout << sizeof(&ptr) << endl;


    int a[20] = {1,2,3,4};
    cout << &a[0] << endl; //same // print address
    //cout << &a << endl; //same
    //cout << a << endl; //same

    int *p = &a[0];
    //cout << p << endl; //address at first position of array
    //cout << *p << endl;
    cout << &p << endl; //&p address of p
    */

    // Symbol table content cannot be change
    /*
    int arr[10];
    //arr = arr + 1; //Error

    int *ptr = &arr[0];
    cout << ptr << endl; //0x7ff7b8c613e0
    ptr = ptr + 1;
    cout << ptr << endl; //0x7ff7b8c613e4
    */

    // Character Array
    /*
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde"; // charcter end with null character hence we assign 6 and the characters is 5, last char is NULL(\0).

    cout << arr <<endl; //print address
    cout << ch <<endl;  //print abcde

    char *c = &ch[0];
    cout << c << endl; //abcde
    cout << &ch[0] << endl; //abcde
    cout << &ch << endl; //address

    //The above cases is occur due to implementation of cout is diffrent-diffrent in case of Integer and Character
    */

    // Pointer Function

    /*
    int value = 5;
    int *p = &value;
    cout << p << endl;
    //print(p); //now p is became an address


    cout << "Before : " << p << endl; // value same
    cout << "Before : " << *p << endl;  //5
    update(p);
    cout << "After : " << p << endl;  // value same
    cout << "After : " << *p << endl; //6    because copy address in update function not actual address
    */

   int arr[6] = {1,2,3,4,5,8};
   cout << sizeof(arr) << endl; // 24
   cout << "Sum is " << getSum(arr + 3, 3) << endl; // we can pass the part of array as a paramter in function by (arr + 3, 3) // 17



    return 0;
}

