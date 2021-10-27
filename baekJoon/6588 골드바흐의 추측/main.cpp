/*************************************************************************************
6588 골드바흐의 추측
1. 에라테토스테네스의 체 이용
2. 중 for 문을 반복수행함으로써 발생하는 시간초과 고려
  1.  하나의 수(i)가 소수일 경우 (n-i) 또한 소수여야 함을 이용하여 이중 for문의 수행을 방지하면된다.
3. 골드바흐의 수는 2보다 큰 짝수는 2개의 소수의 합으로 나타낼수 있다는 추측으로 시작한 소수이다.
>> 에라테토스테네스의 체 이용
Created by 권상훈
*************************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int p_arr[1000001] = { 0, };
int prime[1000001];
int cnt = 0;

void soe() {
	
	for (int i = 2; i < sqrt(1000001);i++) {
		if (p_arr[i] == 0) {
			prime[cnt++] = i;

			for (int j = i * 2; j < 1000001; j += i) {
				p_arr[j] = 1;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n = -1;

	soe();

	while (1) {
		cin >> n;
		if (n == 0) break;

		int i;
		for (i = 0; i < cnt; i++) {
			if (p_arr[n - prime[i]] == 0) {
				cout << n << " = " << prime[i] << " + " << n - prime[i] << '\n';

				break;
			}
		}

		if (i >= cnt) {
			cout << "Goldbach's conjecture is wrong.\n";
		}
	}
}
