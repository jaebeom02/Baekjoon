#include <iostream>
#include <algorithm>
using namespace std;

int dp[501][501] = { 0 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, Mnum = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> dp[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][0] + dp[i][j];
			}
			else if (i == j) {
				dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
			}
			else
			{
				dp[i][j] = max(dp[i - 1][j - 1] + dp[i][j], dp[i - 1][j] + dp[i][j]);
			}
			Mnum = max(Mnum, dp[i][j]);
		}
	}
	cout << Mnum;
}