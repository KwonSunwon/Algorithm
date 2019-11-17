//1094번 막대기
//https://www.acmicpc.net/problem/1094

#include <iostream>

int main()
{
	int x, main_stick { 64 }, side_stick {}, sum {}, keep {}, bangal {1};

	std::cin >> x;

	while( true )
	{
		side_stick = main_stick / 2;
		main_stick /= 2;

		if( side_stick + keep >= x )
			continue;
		else if( side_stick + main_stick + keep > x )
		{
			keep += side_stick;
			++bangal;
		}
		else
		{
			std::cout << bangal;
			break;
		}
	}
}
