#include<iostream>
using namespace std;

int main() {
	long dp[101][10];
	
	dp[1][0] = 0;
	for (int i = 1;i < 10;i++) {
		dp[1][i] = 1;
	}

	for (int n = 2; n <= 100; n++) {
		dp[n][0] = dp[n - 1][1];
		dp[n][9] = dp[n - 1][8];

		for (int i = 1;i < 9;i++) {
			dp[n][i] = (dp[n - 1][i - 1] + dp[n - 1][i + 1]) % 1000000000;
		}
	}

	int n;
	cin >> n;

	long sol = 0;
	for (int i = 0;i < 10;i++) {
		sol += dp[n][i];
	}

	cout << sol % 1000000000 << endl;

	return 0;
}
