#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int m = 7;
	vector<vector<char>> a(n, vector<char>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
  // simply count the no. of 1s per column and find the maximum
	int ans = 0;
	for (int i = 0; i < m; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			cnt += (a[j][i] == '1');
		}
		ans = max(ans, cnt);
		cnt = 0;
	}
	cout << ans << '\n';
	return 0;
}