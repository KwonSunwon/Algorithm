/*
스택 2
Silver 4
https://www.acmicpc.net/problem/28278
*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int orderCount;
    stack<int> stack;

    cin >> orderCount;

    int order, integer;
    for (int i = 0; i < orderCount; i++) {
        scanf("%d", &order);

        switch (order)
        {
        case 1:
            scanf("%d", &integer);
            stack.push(integer);
            break;
        case 2:
            if (stack.empty())
                cout << "-1\n";
            else {
                cout << stack.top() << "\n";
                stack.pop();
            }
            break;
        case 3:
            cout << stack.size() << "\n";
            break;
        case 4:
            if (stack.empty())
                cout << "1\n";
            else
                cout << "0\n";
            break;
        case 5:
            if (stack.empty())
                cout << "-1\n";
            else
                cout << stack.top() << "\n";
            break;
        }
    }
}