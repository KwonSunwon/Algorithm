#include <iostream>
#include <string>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, L;
    cin >> N >> L;

    string str;
    bool b;
    int black;
    int result{ 0 };
    array<int, 1000> horse{ -1 };

    for (int i = 0; i < N; i++) {
        cin >> str;
        black = 0;
        b = false;
        for (auto s : str) {
            if (s == '0')
                b = false;
            else if (s == '1' && !b) {
                b = true;
                black++;
            }
        }
        if (result < black) {
            result = black;
        }
        horse[i] = black;
    }

    cout << result << " " << count(horse.begin(), horse.begin() + N, result);
}