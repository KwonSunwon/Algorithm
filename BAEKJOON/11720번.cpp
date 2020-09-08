//11720번 숫자의 합
//https://www.acmicpc.net/problem/11720

#include <iostream>

int main(){
    int N;
    int num[100] {};
    int sum{};

    std::cin >> N;

    for(int i=0; i < N ; ++i){
        scanf("%1d", &num[i]);
        sum += num[i];
    }

    std::cout << sum;
}