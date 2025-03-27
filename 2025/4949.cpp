#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    stack<char> stack;
    while (true) {
        getline(cin, s);
        if (s.front() == '.' && s.length() == 1)
            break;

        for (char c : s) {
            if (c != '(' && c != ')' && c != '[' && c != ']')
                continue;

            if (stack.empty())
                stack.push(c);
            else if (stack.top() == c)
                stack.push(c);
            else if (stack.top() == '[' && c == ']')
                stack.pop();
            else if (stack.top() == '(' && c == ')')
                stack.pop();
            else
                stack.push(c);
        }
        if (s.back() != '.')
            continue;

        if (stack.empty())
            cout << "yes\n";
        else
            cout << "no\n";

        while (!stack.empty())
            stack.pop();
    }
}