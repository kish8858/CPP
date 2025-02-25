#include <iostream>
using namespace std;

void ReverseString(string &s, int i, int j)
{
    if (i > j)
    {
        return;
    }
    // int temp = s[i];
    // s[i] = s[j];
    // s[j] = temp;
    swap(s[i], s[j]);
    i++;
    j--;
    ReverseString(s, i, j);
}

bool isPalindrome(string s, int i)
{
    if (i > (s.length() - 1 - i))
    {
        return true;
    }
    if (s[i] != s[s.length() - 1 - i])
    {
        return false;
    }
    else
    {
        i++;
        return isPalindrome(s, i);
    }
}

int main()
{
    // string c = "Kisha";
    // ReverseString(c, 0, c.length() - 1);
    // cout << c << endl;

    string s = "BookkooB";
    bool Palindrome = isPalindrome(s, 0);
    if (Palindrome)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}