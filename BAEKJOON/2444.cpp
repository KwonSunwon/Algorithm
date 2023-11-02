/*
별 찍기 - 7
Bronze 3
https://www.acmicpc.net/problem/2444
*/

#include <iostream>
#include <ranges>

using namespace std;
using namespace views;

int main()
{
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int star = 1;
    int space = n - 1;

    for (int i = 0; i < n; i++) {
        for (auto space : iota(0, space)) {
            cout << " ";
        }
        for (auto star : iota(0, star)) {
            cout << "*";
        }
        cout << "\n";
        space--;
        star += 2;
    }
    space = 1;
    star -= 4;
    for (int i = 0; i < n - 1; i++) {
        for (auto space : iota(0, space)) {
            cout << " ";
        }
        for (auto star : iota(0, star)) {
            cout << "*";
        }
        cout << "\n";
        space++;
        star -= 2;
    }
}