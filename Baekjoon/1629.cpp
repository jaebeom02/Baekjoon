#include <iostream>
using namespace std;

long long a, b, c;

long long multiple(long long b) {
	if (b == 0) return 1;
	if (b == 1) return a % c;

	if (b % 2 == 0) return multiple(b / 2) % c * multiple(b / 2) % c;
	return multiple(b / 2) % c * multiple(b / 2) % c * a % c;
}

int main() {
	cin >> a >> b >> c;
	cout << multiple(b);

	return 0;
}