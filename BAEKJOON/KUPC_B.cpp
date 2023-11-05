#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

enum {
    Duck = false,
    Goose = true,
};

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    int duck = 0;
    int goose = N;

    bool turn = Duck;

    while (true) {
        if (turn == Duck) {
            if (duck + 2 == goose) {
                if (duck - 1 != -1)
                    duck--;
                else
                    break;
            }
            else
                duck++;
        }
        else if (turn == Goose) {
            if (goose - 2 == duck) {
                if (goose + 1 != N + 1)
                    goose++;
                else
                    break;
            }
            else
                goose--;
        }
        turn = !turn;
    }

    if (turn == Duck)
        cout << "Duck";
    else
        cout << "Goose";
}

