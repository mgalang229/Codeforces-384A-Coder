#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int flag = 0, cnt = 0;
	for (int i = 0; i < n; i++) { 
		for (int j = 0; j < n; j++) {
			if (flag == 0) {
				if (j % 2 == 0) {
					cnt++;
				}
			} else {
				if (j % 2 == 0) {
					continue;
				} else {
					cnt++;
				}
			}
		}
		if (flag == 0) {
			flag = 1;
		} else {
			flag = 0;
		}
	}
	flag = 0;
	cout << cnt << '\n';
	for (int i = 0; i < n; i++) { 
		for (int j = 0; j < n; j++) {
			if (flag == 0) {
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
		if (flag == 0) {
			flag = 1;
		} else {
			flag = 0;
		}
		cout << '\n';
	}
	return 0;
}
