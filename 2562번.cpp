//2562번 최댓값
//https://www.acmicpc.net/problem/2562

#include <iostream>
#include <algorithm>

int main(){
    int getNum[9];
    int countNum[9];
    int max{}, count{};

    for(int i = 0 ; i<9 ; ++i){
        scanf("%d", &getNum[i]);
        countNum[i] = getNum[i];
    }

    std::sort(getNum, getNum + 9);

    max = getNum[8];

    for(int i = 0 ; i < 9 ; ++i){
        ++count;
        if( countNum[i] == max )
            break;
    }

    std::cout << max << "\n";
    std::cout << count << "\n";
}