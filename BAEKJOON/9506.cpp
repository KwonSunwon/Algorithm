/*
약수들의 합
B1
https://www.acmicpc.net/problem/9506
*/

#include <iostream>
#include <vector>
#include <numeric>
#include <ranges>

using namespace std;

int main()
{
    int n;
    while (true) {
        vector<int> s;
        cin >> n;
        if (n == -1)
            return 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0)
                s.emplace_back(i);
        }
        auto sum = accumulate(s.begin(), s.end(), 0ll);
        if (sum == n) {
            cout << n << " = ";
            for (int i = 0; i < s.size() - 1; i++)
                cout << s[i] << " + ";
            cout << s.back();
        }
        else
            cout << n << " is NOT perfect.";
        cout << "\n";
    }
}