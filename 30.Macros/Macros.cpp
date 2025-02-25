#include <iostream> // Preprocessore Directive : Compile hone se pahle code me copy karta hai

using namespace std;

#define PI 3.14 // value will replace before compile and no taking any extra memory space and unchanged.
#define AREA(l, b) (l * b)

int score  = 25; //Global Variable (But do not use because it can be change or update from anywhere and these changes will reflected on everywhere where they are used), to overcome this, always use reference variable concept(int &score)

int main()
{
    // #define PI 3.14 :->> Macro is piece of code in a program that is replaced by value of Macro
    int r = 5;
    double Pi = 3.14; // Take extra very minimul memory, to overcome this we can use Macro.
    double area = PI * r * r;
    cout << area << endl; // 78.5

    cout << AREA(4.2, 5.222) << endl; // 21.9324

    // H.W. : GFG article

    /*
       1. Object-Like Macros: An object-like macro is a simple identifier that will be replaced by a code fragment.
           #define DATE 31
       2. Chain Macros : Macros inside macros are termed chain macros. In chain macros first of all parent macro is expanded then the child macro is expanded.
           #define INSTAGRAM FOLLOWERS
           #define FOLLOWERS 138
       3. An object-like macro could have a multi-line. So to create a multi-line macro you have to use backslash-newline.
           #define ELE 1, \ // for creating array
                       2, \
                       3
       4. Function-Like Macros : These macros are the same as a function call. It replaces the entire code instead of a function name
          Ex 1 : #define min(a, b) (((a) < (b)) ? (a) : (b))
          Ex 2 : #define  PI  3.1416
                 #define  AREA(r)  (PI*(r)*(r))

   */

  //Inline Function : are used to reduce the function calls overhead.
  //If function body is one line then make inline function
}