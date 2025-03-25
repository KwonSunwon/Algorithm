#include <iostream>
#include <string>

using namespace std;

int main()
{
	string ss;
	getline(cin, ss);

	for(char& c : ss) {
		if(c >= 'A') {
			if(c >= 'a') {
				c = (c - 'a' + 13) % 26 + 'a';
			}
			else {
				c = (c - 'A' + 13) % 26 + 'A';
			}
		}
	}

	cout << ss;
}