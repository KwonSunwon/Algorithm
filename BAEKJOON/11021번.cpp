//11021번 A+B - 7
//https://www.acmicpc.net/problem/11021

#include <iostream>

int main(){
    int t;
    int a,b;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; ++i){
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i+1 ,a+b);
    }
}