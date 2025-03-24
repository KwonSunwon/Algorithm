#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool IsGood(string s);

int main()
{
    int n;
    cin >> n;

    string temp;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        cnt += (int)IsGood(temp);
    }
    cout << cnt;
}

bool IsGood(string s)
{
    if ((s.length() & 1) == 1)
        return false;

    stack<char> stack;
    auto it = s.begin();
    stack.push(*it++);

    while (it != s.end()) {
        while (stack.top() == *it) {
            stack.pop();
            it++;
            if (stack.empty() || it == s.end())
                break;
        }
        if (it == s.end())
            break;
        stack.push(*it++);
    }
    if (!stack.empty())
        return false;
    return true;
}
