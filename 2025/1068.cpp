#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

struct Node {
	int parent;
	int left;
	int right;
};

map<int, Node> tree;
int leafCount = 0;

void CutNode(int node);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	int node;
	for(int i = 0; i < n; i++) {
		cin >> node;
		tree.insert({ i,{node, -1, -1} });
	}

	for(auto n : tree) {
		if(n.second.parent == -1)
			continue;
		auto it = tree.find(n.second.parent);
		if(it->second.left == -1)
			it->second.left = n.first;
		else
			it->second.right = n.first;
	}

	cin >> node;
	auto nodeIt = tree.find(node);
	if(nodeIt->second.parent == -1) {
		cout << 0;
		return 0;
	}
	auto parentIt = tree.find(nodeIt->second.parent);
	if(parentIt->second.left == node)
		parentIt->second.left = -1;
	else
		parentIt->second.right = -1;
	CutNode(node);

	for(auto n : tree) {
		if(n.second.left == -1 && n.second.right == -1)
			leafCount++;
	}

	cout << leafCount;
}

void CutNode(int node)
{
	auto it = tree.find(node);
	if(it == tree.end())
		return;
	if(it->second.left != -1)
		CutNode(it->second.left);
	if(it->second.right != -1)
		CutNode(it->second.right);
	tree.erase(it);
}
