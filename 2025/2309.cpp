#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    array<int, 9> dwarves;
    for (auto& dwarf : dwarves) {
        cin >> dwarf;
    }

    sort(dwarves.begin(), dwarves.end());

    // int sum = accumulate(dwarves.begin(), dwarves.end(), 0);

    // int gap = sum - 100;

    // bool flag = false;
    // for (auto i : dwarves) {
    //     for (auto j : dwarves) {
    //         if (i + j == gap) {
    //             remove(dwarves.begin(), dwarves.end(), i);
    //             remove(dwarves.begin(), dwarves.end(), j);
    //             flag = true;
    //             break;
    //         }
    //     }
    //     if (flag) break;
    // }
    do {
        int s = 0;
        for (int i = 0; i < 7; i++) s += dwarves[i];
        if (s == 100) break;
    } while (next_permutation(dwarves.begin(), dwarves.end()));

    for (int i = 0; i < 7; i++)
        cout << dwarves[i] << "\n";
}