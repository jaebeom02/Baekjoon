#include <iostream>
#include <vector>
#define MAX 100001
using namespace std;

int n;
int arr[MAX];
bool visited[MAX];
vector<int> graph[MAX];

void dfs(int x) {
	visited[x] = true;
	for (int i = 0; i < graph[x].size(); i++) {
		int y = graph[x][i];
		if (!visited[y]) {
			arr[y] = x;
			dfs(y);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	int a, b;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	
	dfs(1);
	for (int i = 2; i <= n; i++) {
		cout << arr[i] << "\n";
	}
}
//나름 ? 쉬웠던 문제 같았다.