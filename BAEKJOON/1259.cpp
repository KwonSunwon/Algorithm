/*
팰린드롬수
B1
https://www.acmicpc.net/problem/1259
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string n, r;
    while (true) {
        cin >> n;
        if (n.front() == '0')
            return 0;
        reverse_copy(n.begin(), n.end(), back_inserter(r));
        if (n == r)
            cout << "yes\n";
        else
            cout << "no\n";
        r.clear();
    }
}