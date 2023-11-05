#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, L;
    cin >> N >> L;

    if (N == 0) {
        for (int i = 0; i < L - 1; i++) {
            cout << 1;
        }
        cout << 0;
    }
    else {
        cout << N;
        for (int i = 0; i < L - 1; i++)
            cout << 1;
    }
}