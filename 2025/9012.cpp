#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	string s;
	for(int i = 0; i < t; i++) {
		cin >> s;

		stack<char> stack;
		auto it = s.begin();
		while(it != s.end()) {
			if(stack.empty())
				stack.push(*it);
			else if(stack.top() == *it)
				stack.push(*it);
			else if(stack.top() != '(')
				stack.push(*it);
			else
				stack.pop();
			it++;
		}
		if(!stack.empty())
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}