#include <iostream>

int main(){
    int N;
    int count{};

    std::cin >> N;

    while(N!=0){
        if(0==(N%5)){
            N -= 5;
            ++count;
        }
        else if(0==(N%3)){
            N -= 3;
            ++count;
        }
        else if(N>5){
            N -=5;
            ++count;
        }
        else{
            count = -1;
            break;
        }
    }

    std::cout << count << std::endl;
}