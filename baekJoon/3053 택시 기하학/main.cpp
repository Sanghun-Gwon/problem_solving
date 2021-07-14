  
/*************************************************************************************
3053 택시기하학

1. 택시기하학에 대한 내용 공부
2. 기존 유클리드 기하학과 다른 택시기하학에서의 원의 넓이를 출력

>> 택시기하학(기하학) 이용

Created by 권상훈
*************************************************************************************/

#include <iostream>
#define _USE_MATH_DEFINES
#include "math.h"

using namespace std;


int main(void) {

	int r;
	cin >> r;
	cout << fixed;
	cout.precision(6);
	cout << r*r*M_PI << endl;     // 3.14159
	cout << pow(r *2,2)/2 << endl;     // 3.14159

	return 0;
}
