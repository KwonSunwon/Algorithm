/*
소수
B2
https://www.acmicpc.net/problem/2581
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    vector<int> primes;

    for (int num = m; num <= n; num++) {
        bool isPrime = true;
        if (num == 1)
            continue;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            primes.push_back(num);
    }
    if (primes.empty())
        cout << -1;
    else {
        cout << accumulate(primes.begin(), primes.end(), 0ll) << "\n";
        cout << primes.front();
    }
}