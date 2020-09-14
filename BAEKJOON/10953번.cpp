//10953번 A+B - 6
//https://www.acmicpc.net/problem/10953

#include <iostream>

int main(){
    int t;
    int a,b;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; ++i){
        scanf("%d,%d",&a,&b);
        printf("%d\n", a + b);
    }
}