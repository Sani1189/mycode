// C++ program to check for
// balanced parentheses in a string

#include <bits/stdc++.h>
using namespace std;

// Function to check for
// balanced parentheses in a string

void check_parentheses(string st, int N)
{
    bool ans = true;
    stack<char> s;

    for (int i = 0; i < N; i++)
        // push if opening bracket
        if (st[i] == '(' || st[i] == '[' || st[i] == '{')
            s.push(st[i]);
        else
        {
            if (!s.empty())
            {
                // check if top of stack is pair of current
                // element
                char temp = s.top();

                s.pop();

                if (st[i] == ')' && temp != '(')
                {
                    ans = false;
                    break;
                }
                if (st[i] == ']' && temp != '[')
                {
                    ans = false;
                    break;
                }
                if (st[i] == '}' && temp != '{')
                {
                    ans = false;
                    break;
                }
            }
            // if stack is empty, not balanced
            else
            {
                ans = false;
                break;
            }
        }

    // If stack is not empty after traversal
    // then not balanced

    if (!s.empty())
        ans = false;
    if (ans)
        cout << "balanced";
    else
        cout << "Not balanced";
}

// Driver code

int main()
{
    string s = ")(){}()[]";
    int N = s.length();

    check_parentheses(s, N);
}