/*
개수 세기
Bronze 5
https://www.acmicpc.net/problem/10807
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, target;
    vector<int> arr;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> target;
        arr.emplace_back(target);
    }
    cin >> target;

    cout << ranges::count(arr, target);
}