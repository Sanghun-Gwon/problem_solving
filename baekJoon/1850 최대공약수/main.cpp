/*************************************************************************************
1850 최대공약수

1. 1로 이루어진 수의 최대공약수는 두 수의 길이의 최대공약수가 해당 공약수의 길이가 되며 그 공약수 또한 1로 이루어지게 된다.
  - 왜냐하면 두 수는 1로 이루어져 있기 때문에 위와 같은 이해가 만들어진다.

Created by 권상훈
*************************************************************************************/

#include<iostream>
#include<cmath>

using namespace std;

unsigned long long int GCD(unsigned long long int a, unsigned long long int b) {
	return (b == 0) ? a : GCD(b, a % b);
}

int main() {

	unsigned long long int a, b;
	cin >> a >> b;

	for (int i = 0;i < GCD(a, b);i++) {
		cout << "1";
	}
        
	return 0;
}
