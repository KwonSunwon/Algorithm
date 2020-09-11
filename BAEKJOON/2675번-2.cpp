//2675번 문자열 반복
//https://www.acmicpc.net/problem/2675
//아래 풀이가 처음에 틀렸다고 나온 이유
// -> 25열에 개행문자가 없어서 출력이 틀렸다고 판단됨

#include <iostream>
#include <string>

using namespace std;

int main(){
    int testCase;
    string s;
    int n;

    cin >> testCase;

    for(int i = 0 ; i < testCase ; ++i){
        cin >> n >> s;
        for(int j = 0 ; j < s.length() ; ++j){
            for(int l = n ; l > 0 ; --l){
                cout << s[j];
            }
        }
        cout << "\n";
    }
}