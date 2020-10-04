#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	if (n % 2 == 0) {
		cout << (n * n) / 2;
	} else {
		cout << ((n * n) + 1) / 2;
	}
	cout << '\n';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					cout << 'C';
				} else {
					cout << '.';
				}
			} else {
				if (j % 2 == 0) {
					cout << '.';
				} else {
					cout << 'C';
				}
			}
		}
		cout << '\n';
	}
	return 0;
}
