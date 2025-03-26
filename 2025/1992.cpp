#include <iostream>
#include <string>

using namespace std;

int video[64][64];
string zip = "";

int dy[] = { 0, 0, 1, 1 };
int dx[] = { 0, 1, 0, 1 };

void Zip(int y, int x, int n);

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf_s("%1d", &video[i][j]);
        }
    }

    Zip(0, 0, n);

    cout << zip;
}

void Zip(int y, int x, int n)
{
    bool isZipable = true;
    int t = video[y][x];
    for (int i = y; i < y + n; i++) {
        for (int j = x; j < x + n; j++) {
            if (t != video[i][j]) {
                isZipable = false;
                break;
            }
        }
    }

    if (isZipable) {
        zip += t + '0';
        return;
    }

    zip += "(";
    int ny, nx;
    int nn = n / 2;
    for (int i = 0; i < 4; i++) {
        ny = y + nn * dy[i];
        nx = x + nn * dx[i];
        Zip(ny, nx, nn);
    }
    zip += ")";
}
