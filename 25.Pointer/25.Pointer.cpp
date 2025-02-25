#include <iostream>
using namespace std;
int main()
{
    /*
    Pointer variables store addresses of other variables.
    Dereference Operator:As just seen, a variable that stores the address of another variable is called a pointer. Pointers are said to "point to" the variable whose address they store.   
    An exciting property of pointers is that they can access the variable they point to directly. This is done by preceding the pointer name with the dereference operator (*). The operator itself can be read as "value pointed to by.”

    The reference and dereference operators are thus complementary:

    & is the address-­of operator and can be read simply as "address of.”
    * is the dereference operator and can be read as "value pointed to by.”


    There are different types of pointers in C++, and they are as follows:

    Null Pointers
    Double Pointers
    Void Pointers
    Wild Pointers
    Dangling Pointer
    */

    /*
    int num = 5;
    cout << "address of num is : " << &num << endl;
    int *ptr = &num;
    cout << "address of ptr is : " << &ptr << endl;
    cout << "value of *ptr is : " << (*ptr)++ << endl; //num and *ptr are same
    cout << "address of num is : " << ptr << endl;
    cout << "size of *ptr is : " << sizeof(*ptr) << endl;

    double num2 = 10;
    double *p = &num2;
    cout << "size of *p is : " << sizeof(ptr) << endl; //pointer always take 8 byte.
    */

    /*
     int n = 5;
     int *ptr = &n;

     cout << "before : " << n << endl;
     (*ptr)++;  // increase the value of n by 1
     cout << "After : " << n << endl;


     // copying of pointer
     int *q = ptr;  // ptr means the the address of n stored in ptr is now stored in pointer q
     */

    
       //Imp. Concept

    //    int i = 3;
    //    int *t = &i;

    //     cout << *t << endl;
    //     *t = *t + 1;// (value at address stored in t increased by 1 i.e. 4) 
    //    cout << *t << endl;

    //    cout << t << endl;
    //     t++;
    //     cout << t << endl; // Address increase by 4 byte
    //     t++;
    //     cout << t << endl; // Address increase by 4 byte
    



    int firstvalue = 5, secondvalue = 15;
    char thirdvalue = 'a';
    int *p1, *p2;
    char *p3;
    p1 = &firstvalue;  // p1 = address of firstvalue
    p2 = &secondvalue; // p2 = address of secondvalue
    p3 = &thirdvalue;  // p3 = address of thirdvalue
    *p1 = 10;          // value pointed to by p1 = 10
    *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
    p1 = p2;           // p1 = p2 (value of pointer is copied)
    *p1 = 20;          // value pointed to by p1 = 20
    *p3 = 'b';         // value pointed to by p3 = ‘b ’
    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << "thirdvalue is " << thirdvalue << endl;
    return 0;
}