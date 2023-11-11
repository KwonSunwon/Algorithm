/*
달팽이는 올라가고 싶다
B1
https://www.acmicpc.net/problem/2869
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, v;
    cin >> a >> b >> v;

    if (v == a) {
        cout << 1;
        return 0;
    }

    if ((v - a) <= (a - b)) {
        cout << 2;
        return 0;
    }

    double n = double(v - a) / double(a - b);
    if (n - int(n) != 0)
        cout << int(n) + 2;
    else
        cout << int(n) + 1;
}