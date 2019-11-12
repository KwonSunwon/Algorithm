//2588번 곱셈
//https://www.acmicpc.net/problem/2588


#include <iostream>

int main()
{
	int a, b;
	int c[ 3 ];
	int res[ 3 ];
	int f;
	
	std::cin >> a >> b;
	
	c[ 2 ] = b / 100;
	b = b % 100;
	c[ 1 ] = b / 10;
	b = b % 10;
	c[ 0 ] = b;

	for( int i = 0; i < 3; ++i )
	{
		res[ i ] = a * c[ i ];
		std::cout << res[ i ] << std::endl;
	}
	
	f = res[ 0 ] + res[ 1 ] * 10 + res[ 2 ] * 100;

	std::cout << f << std::endl;
}