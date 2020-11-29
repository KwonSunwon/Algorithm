//1158번 요세푸스 문제
//https://www.acmicpc.net/problem/1158

#include <iostream>
#include <list>

int main(){
    int n,k;

    std::cin >> n;
    std::cin >> k;

    std::list<int> yosef;

    for(int i = 0 ; i < n ; ++i){
        yosef.push_back(i+1);
    }

    std::cout << yosef.size();

    for(auto i : yosef)
        std::cout << i << std::endl;
}