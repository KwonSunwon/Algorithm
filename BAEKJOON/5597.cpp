/*
과제 안 내신 분...?
Bronze 5
https://www.acmicpc.net/problem/5597
*/

#include <iostream>
#include <ranges>
#include <array>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    array<bool, 30 + 1> summit{ false };
    int studentID;

    for (int i : views::iota(0, 28)) {
        cin >> studentID;
        summit[studentID] = true;
    }

    for (int studentID : views::filter(views::iota(1, 31), [summit](int id) {
        return !summit[id];
        }))
        cout << studentID << "\n";
}