#include <iostream>

using namespace std;

int main()
{
    bool truck[3][100] = { {false}, {false}, {false} };
    int p[100];

    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < 3; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        for (t1; t1 < t2; t1++) {
            truck[i][t1] = true;
        }
    }
}