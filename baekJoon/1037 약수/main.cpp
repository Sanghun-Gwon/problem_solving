/*************************************************************************************
1037 약수

1. 두 정수 a, b에  대하여 b=ac를 만족하는 정수 가 존재한다면 a를 b의 약수라 한다.
2. 가장 큰 약수와 가장 작은 약수의 곱이 답이 된다.
  >> 약수

Created by 권상훈
*************************************************************************************/

#include<iostream>
#define MAX_INT  1000000;
#define MIN_INT  1;

using namespace std;

int main() {
    int n;
    cin >> n;
    int max_divisor = MIN_INT;
    int min_divisor = MAX_INT;
    
    while (n--) {
        int divisor;
        cin >> divisor;
        max_divisor = divisor > max_divisor ? divisor : max_divisor;
        min_divisor = divisor < min_divisor ? divisor : min_divisor;
    }

    cout << max_divisor * min_divisor;
}
