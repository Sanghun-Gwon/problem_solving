/*************************************************************************************

1002 터렛
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

int p_arr[10001] = { 0, };			

void soe() {				
	p_arr[0] = p_arr[1] = 1;
	for (int i = 2; i < sqrt(10001);i++) {
		if (p_arr[i] == 0) {
			for (int j = i * 2; j < 10001; j += i) {
				p_arr[j] = 1;
			}
		}
	}
}

int main()
{
	int t;				
	int n;

	cin >> t;
	soe();

	while (t--) {
		cin >> n;
		int num1 = -1, num2 = -1;
		int min = n;

		for (int i = 2; i <= (n+1)/2;i++) {
			if (p_arr[i] == 0 && p_arr[n-i] ==0) {
				if (min > n - (2*i)) {
					min = n - (2 * i);
					num1 = i;
					num2 = n-i;
				}
				
			}
		}
		cout << num1 << " " << num2 << endl;
	}
}
