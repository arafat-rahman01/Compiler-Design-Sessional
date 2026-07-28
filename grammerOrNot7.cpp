#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout << "Grammar:\n";
    cout << "S -> aS\n";
    cout << "S -> Sb\n";
    cout << "S -> ab\n\n";

    cout << "Enter the string: ";
    cin >> str;

    int len = str.size();
    int flag = 0;
    int a = -1, b = len;
    int i;

    // Find the last 'a'
    for (i = 0; i < len; i++)
    {
        if (str[i] != 'a')
        {
            a = i - 1;
            break;
        }
    }

    // If the whole string is 'a'
    if (i == len)
        a = len - 1;

    // Find the first 'b'
    for (i = len - 1; i >= 0; i--)
    {
        if (str[i] != 'b')
        {
            b = i + 1;
            break;
        }
    }

    // If the whole string is 'b'
    if (i == -1)
        b = 0;

    // Check the grammar
    if (a >= 0 && b < len && a + 1 == b)
        flag = 1;

    if (flag)
        cout << "\n" << str << " is Accepted.\n";
    else
        cout << "\n" << str << " is Rejected.\n";

    return 0;
}