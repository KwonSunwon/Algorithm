//8958번 OX퀴즈
//https://www.acmicpc.net/problem/8958

#include <iostream>
#include <string>

int main(){
    int testcase;
    int score {};
    int temp {};
    std::string ox;

    std::cin >> testcase;

    for(int i = 0 ; i < testcase ; ++i){
        std::cin >> ox;
        for(int j = 0 ; j < ox.length() ; ++j){
            if(ox[j] == 'O'){
                ++temp;
                score += temp;
            }
            else if(ox[j] == 'X'){
                temp = 0;
            }
        }
        std::cout << score << "\n";
        score = 0;
        temp = 0;
    }
}