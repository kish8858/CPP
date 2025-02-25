#include <iostream>
using namespace std;

void update(int **p2)
{
    p2 = p2 + 1;     // No changes
    *p2 = *p2 + 1;   // Address Update
    **p2 = **p2 + 1; // value Update
}
int main()
{
    
    int i = 5;
    int *p = &i;
    int **p2 = &p; //double pointer

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << &p << endl;
    cout << p2 << endl;
    

    // MCQ :
    /*
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout  << first << " " << second << endl;  // 8 9
    */

    /*

    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first  << endl; // 7
    */

    /*
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl; // 8 9
    */

    /*
    int *p = 0; // null pointer
    int first = 110;
    *p = first; // wrong(segmentation fault) must be p = &first
    cout << *p << endl; 
    */

    /*
    int first = 8;
    int second = 11;
    int *third = &second; //11
    first = *third; // 11
    *third = *third + 2; //13
    cout  << first << "  " << second << endl; // 11 13
    */

    /**/
    // float f = 12.5;
    // float p = 21.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p << endl;


    return 0;
}