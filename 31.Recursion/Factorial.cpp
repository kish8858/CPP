#include<iostream>
using namespace std;

int factorial(int n){
    //cout << n << endl;
    if(n == 0){
        return 1; // (mandotory) Base case: A recursive function must have a terminating condition at which the process will stop calling itself.
    }
    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;
    cout << biggerProblem << endl;
    return biggerProblem;// OR n * factorial(n - 1) // Recursive Relation;
}

void count(int n){
    if(n == 0){
        return;
    }
    cout << n << endl; // Tail Recursion
    count(n - 1); // Recursive Relation
    cout << n << endl; // Head Recursion
}

int main()
{
    //Recursion is a function calls itself called recursion
    //Big problem ka solution depend karta hai same type ki chotti problem par usko solve karne ke liye recusrion use karte hai Example : 2 power 4 = 2 * 2 power 3
    
    int n = 5;
    //cin >> n;
    // int ans = factorial(n);
    // cout << ans << endl;
    // cout << endl;

    count(n);
    return 0;
}