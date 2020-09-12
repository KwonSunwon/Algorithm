//1330번 두 수 비교하기
//https://www.acmicpc.net/problem/1330

#include <iostream>

using namespace std;

int main(){
    long a,b;

    cin >> a >> b;

    if( a > b)
        cout << ">";
    else if( a < b)
        cout << "<";
    else
        cout << "==";
}