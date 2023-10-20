/*
주사위 세개
Bronze 4
https://www.acmicpc.net/problem/2480
*/

#include <iostream>

using namespace std;

int main()
{
    int diceA, diceB, diceC, price;
    cin >> diceA >> diceB >> diceC;

    if (diceA == diceB && diceB == diceC)
        price = 10'000 + diceA * 1'000;
    else if (diceA == diceB)
        price = 1'000 + diceA * 100;
    else if (diceA == diceC)
        price = 1'000 + diceC * 100;
    else if (diceB == diceC)
        price = 1'000 + diceC * 100;
    else
        price = max(diceA, max(diceB, diceC)) * 100;

    cout << price;
}