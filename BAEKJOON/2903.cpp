/*
중앙 이동 알고리즘
B3
https://www.acmicpc.net/problem/2903
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int init{ 2 };
    for (int i = 0; i < n; i++) {
        init = init * 2 - 1;
    }
    cout << init * init;
}