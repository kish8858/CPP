#include <iostream>
using namespace std;

void reachedHome(int src, int dest)
{
    cout << "Step : " << src << endl;
    if (src == dest)
    {
        cout << "Reached Home" << endl;
        return;
    }
    // src++;
    reachedHome(src + 1, dest);
}
int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
   
int countWayToReach(){
     return 0;
}

void SayDigit(int n, string arr[]){
    
    if(n <=0){
        return;
    }
    int a = n % 10;
    n = n / 10;
    SayDigit(n, arr);
    cout << arr[a] << " ";


}

int main()
{
    /*
    int src = 1;
    int dest = 10;
    reachedHome(src, dest);
    */

    int n = 5;
    cout << fibonacci(n) << endl;
    string arr[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    //SayDigit(420, arr);
    return 0;
}