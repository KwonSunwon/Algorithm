#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<char> players;

	string temp;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		players.push_back(temp.front());
	}

	int alpha[26] = { 0 };
	for(char c : players) {
		alpha[c - 'a']++;
	}

	bool PREDAJA = true;
	for(int i = 0; i < 26; i++) {
		if(alpha[i] >= 5) {
			cout << (char)(i + 'a');
			PREDAJA = false;
		}
	}
	if(PREDAJA)
		cout << "PREDAJA";
}