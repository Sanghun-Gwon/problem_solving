#include<iostream>

using namespace std;

int max_n(int n, int m) {
	return (n > m) ? n : m;
}

int main() {
	int t;
	cin >> t;

	int stair[10001];
	int dp[10001];

	for (int i = 1; i <= t; i++) {
		cin >> stair[i];
	}

	dp[1] = stair[1];
	dp[2] = stair[2] + dp[1];

	for (int i = 3; i <= t;i++) {
		dp[i] = max_n(dp[i - 2] + stair[i], dp[i - 3] + stair[i - 1] + stair[i]);
	}


	cout << dp[t] << endl;

	return 0;
}
