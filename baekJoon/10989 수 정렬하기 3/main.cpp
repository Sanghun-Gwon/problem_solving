/*************************************************************************************
10989 수 정렬하기 3

1. 오름차순 정렬
2. 수의 개수가 외대 10,000,000개 : 시간초과 주의
3. 수의 범위가 작음을 이용
>>counting sort 이용

Created by 권상훈
*************************************************************************************/

#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main()
{
    short arr[10001] = { 0, };
    int n;
    scanf("%d", &n);
    while (n--) {
        int num;
        scanf("%d", &num);

        arr[num]++;
    }

    for (int i = 0;i < 10001;i++) {
        for (int j = 0;j < arr[i];j++) {
            printf("%d\n", i);
        }
    }

}
