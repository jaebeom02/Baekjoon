#include <iostream>
#include <algorithm>
using namespace std;

int n;
pair<char, char> node[26];

//전위순회
void preorder(char c) {
	if (c == '.') return;

	cout << c;
	preorder(node[c - 'A'].first);
	preorder(node[c - 'A'].second);
}
//중위순회
void inorder(char c) {
	if (c == '.') return;

	inorder(node[c - 'A'].first);
	cout << c;
	inorder(node[c - 'A'].second);

}
//후위순회
void postorder(char c) {
	if (c == '.') return;

	postorder(node[c - 'A'].first);
	postorder(node[c - 'A'].second);
	cout << c;
}

int main() {
	cin >> n;
	char left, mid, right;
	
	for (int i = 0; i < n; i++) {
		cin >> mid >> left >> right;
		node[mid - 'A'].first = left;
		node[mid - 'A'].second = right;
	}
	preorder('A');
	cout << "\n";
	inorder('A');
	cout << "\n";
	postorder('A');
	cout << "\n";
}