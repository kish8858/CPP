#include <iostream> 
using namespace std;

  

inline int getMax(int &a, int &b){ //Inline Function : are used to reduce the function calls overhead.
    return (a > b) ? a : b;    //If function body is one line then make inline function
}



int main(){
    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a, b); // not called function, it is normally replace the function with [(a > b) ? a : b]
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a, b);
    cout << ans << endl;

}