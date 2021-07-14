/*************************************************************************************
10872 팩토리얼


1. 팩토리얼 → n! = 1 × 2 × ⋅⋅⋅ × n
  >> 재귀이용, 다만 반복문을 이용해도 된다.

Created by 권상훈
*************************************************************************************/

#include<iostream>
using namespace std;

int factorial(int n) {
	if (n == 1 || n == 0) return 1;
	return n * factorial(n - 1);
}

int main() {
	int n;
	cin >> n;
	cout << factorial(n);
	return 0;
}
