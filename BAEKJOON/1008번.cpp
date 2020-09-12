//1008번 A/B
//https://www.acmicpc.net/problem/1008

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    long double a,b;
    long double result;

    cin >> a >> b;

    result = a/b;

    cout << setprecision(16);
    cout << result;
}