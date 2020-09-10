//1110번 더하기 사이클
//https://www.acmicpc.net/problem/1110

#include <iostream>
#include <stdio.h>

int main(){
    int count{};
    int a,b;
    int firstNum, temp{};
    int n,m;

    
    scanf("%d",&firstNum);
    
    std::cout << firstNum << std::endl;

    if(firstNum < 10){
        n = 0;
    }
    else{
        n = firstNum / 10;
    }
    
    m = firstNum - (n * 10);
    
    std::cout << firstNum << std::endl;   

    std::cout << n << ", " << m << std::endl;

    do
    {
        a = m * 10;
        b = n + m;
        if(b>=10)
            b -= 10;
        temp = a + b;
        n = m;
        m = b;
        ++count;
        std::cout << count << "번째 temp : " << temp << std::endl;
    }while(temp != firstNum);

    std::cout << temp << std::endl;

    std::cout << count;
}