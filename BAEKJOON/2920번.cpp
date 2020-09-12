//2920번 음계
//https://www.acmicpc.net/problem/2920

#include <iostream>

int main(){
    int n[8];
    int count {};

    for(int i = 0 ; i < 8 ; ++i){
        std::cin >> n[i];
    }

    for(int i = 0 ; i < 7 ; ++i){
        if(n[i] < n[i+1])
            ++count;
    }
    
    if( 7 == count )
        std::cout << "ascending";
    else if( 0 == count )
        std::cout << "descending";
    else
        std::cout << "mixed";
}