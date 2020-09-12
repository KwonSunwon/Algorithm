//1330번 두 수 비교하기
//https://www.acmicpc.net/problem/1330

//cin.eof() 자체에는 입력을 받는 기능이 없음
//때문에 처음 코드(줄18이 if문 전에 있던)에서는
//마지막으로 입력받은 값을 기반으로 eof를 판단
//즉 마지막에 입력받은 b의 값을 기반으로 eof를 판단함으로
//while 문이 한번 더 실행되어 마지막에 값이 다시 두번 출력됨

#include <iostream>

using namespace std;

int main(){
    int a,b;

    while(1){
        cin >> a >> b;
        if(cin.eof() == true)
            break;
        cout << a + b << "\n";
    }

    return 0;
}
