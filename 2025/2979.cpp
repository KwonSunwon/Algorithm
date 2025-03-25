#include <iostream>

using namespace std;

int main()
{
    bool truck[3][101] = { {false}, {false}, {false} };

    int p[3];
    cin >> p[0] >> p[1] >> p[2];
    for (int i = 0; i < 3; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        for (t1; t1 < t2; t1++) {
            truck[i][t1 - 1] = true;
        }
    }

    bool flag[3] = { truck[0][0], truck[1][0], truck[2][0] };
    int cnt;
    int total = 0;
    for (int i = 0; i < 100; i++) {
        cnt = -1;
        for (int t = 0; t < 3; t++) {
            if (truck[t][i])
                cnt++;
        }
        if (cnt != -1)
            total += p[cnt] * (cnt + 1);
    }

    cout << total;
}