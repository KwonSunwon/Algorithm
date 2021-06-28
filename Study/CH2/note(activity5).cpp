#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> input = {};
    
    input.push_back(-1);
    std::push_heap(input.begin(), input.end());

    input.push_back(2);
    std::push_heap(input.begin(), input.end());
    
    input.push_back(-2);
    std::push_heap(input.begin(), input.end());
    
    input.push_back(1);
    std::push_heap(input.begin(), input.end());

	for(auto i : input)
	    std::cout << i << ' ';
	std::cout << "\n";
}
