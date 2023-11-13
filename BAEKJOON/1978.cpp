/*
소수 찾기
B2
https://www.acmicpc.net/problem/1978
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int num;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        bool isPrime = true;
        cin >> num;
        if (num == 1)
            continue;
        for (int j = 2; j <= sqrt(num); j++)
            if (num % j == 0) {
                isPrime = false;
                break;
            }
        if (isPrime)
            cnt++;
    }
    cout << cnt;
}