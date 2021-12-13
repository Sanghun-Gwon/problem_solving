#include<iostream>

using namespace std;

int main() {
	int n, sol;
	int nums[1000];
	int dp[10000];

	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> nums[i];
		dp[i] = 1;
	}

	sol = dp[0];

	for (int i = 1;i < n;i++) {
		for (int j = 0; j < i;j++) {
			dp[i] = (nums[j] < nums[i]) && dp[j] >= dp[i] ? dp[j] + 1 : dp[i];
		}
		sol = (sol < dp[i]) ? dp[i] : sol;
	}

	cout << sol << endl;

	return 0;
}
