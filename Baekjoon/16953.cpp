#include <iostream>
using namespace std;

int a, b, cnt = 1;

void dfs(int x) {
	int y = 0;

	if (x % 2 == 0) {
		y = x / 2;
	}
	else if (x % 10 == 1) {
		y = x / 10;
	}
	else {
		cout << -1;
		return;
	}

	if (y < a) {
		cout << -1;
		return;
	}
	else if (y == a) {
		cnt++;
		cout << cnt;
	}
	else {
		cnt++;
		int next = y;
		dfs(next);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b;
	dfs(b);
}