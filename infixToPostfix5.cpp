#include<bits/stdc++.h>
using namespace std;

int priority(char op)
{
    if(op=='+' || op=='-')
        return 1;
    if(op=='*' || op=='/')
        return 2;
    return 0;
}

int main()
{
    string infix;
    stack<char> st;

    cout << "Enter Infix Expression: ";
    cin >> infix;

    cout << "Postfix Expression: ";

    for(char ch : infix)
    {
        // Operand
        if(isalnum(ch))
        {
            cout << ch;
        }

        // Left Parenthesis
        else if(ch == '(')
        {
            st.push(ch);
        }

        // Right Parenthesis
        else if(ch == ')')
        {
            while(!st.empty() && st.top() != '(')
            {
                cout << st.top();
                st.pop();
            }

            if(!st.empty())
                st.pop();
        }

        // End of Expression
        else if(ch == ';')
        {
            while(!st.empty())
            {
                cout << st.top();
                st.pop();
            }
            break;
        }

        // Operator
        else
        {
            while(!st.empty() && st.top() != '(' &&
                  priority(st.top()) >= priority(ch))
            {
                cout << st.top();
                st.pop();
            }

            st.push(ch);
        }
    }

    cout << endl;

    return 0;
}