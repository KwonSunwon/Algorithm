//2753번 윤년
//https://www.acmicpc.net/problem/2753

#include <iostream>

int main(){
    int year;
    bool leap = 0;

    std::cin >> year;

    if( (year%4) == 0 ){
        if( ((year%100) != 0) || ( (year%400) == 0) )
            leap = 1;
    }
    
    std::cout << leap;
}