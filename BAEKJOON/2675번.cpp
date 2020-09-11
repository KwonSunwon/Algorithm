//2675번 문자열 반복
//https://www.acmicpc.net/problem/2675

#include <iostream>
#include <string>

using namespace std;

int main(){
    int T;
    string S;
    int R;

    cin >> T;

    string* temp = new string[T];

    for(int i = 0 ; i < T ; ++i){
        cin >> R;
        cin >> S;
        string tempS;
        for(int j = 0 ; j < S.length() ; ++j){
            for(int l = 0 ; l < R ; ++l){
                tempS += S[j];
            }
        }
        temp[i] = tempS;
    }

    for(int i = 0 ; i < T ; ++i)
        cout << temp[i] << "\n";

    delete[] temp;
}