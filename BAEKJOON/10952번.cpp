//10952번 A+B -5
//https://www.acmicpc.net/problem/10952

#include <iostream>

int main()
{
	int num[2], sum[1000];
	int k {0};

    /* 이전코드
        while (num[0] != 0){...}

        num[2]가 초기화 되지 않아서 while문이 실행되지 않음
		쓰레기 값으로 초기화
    */

	do{
		std::cin >> num[ 0 ] >> num[ 1 ];
		sum[k] = num[ 0 ] + num[ 1 ];
		++k;
	} while ( num[0] != 0 );

	for( int i = 0; i < k-1; ++i )
		std::cout << sum[ i ] << std::endl;
}