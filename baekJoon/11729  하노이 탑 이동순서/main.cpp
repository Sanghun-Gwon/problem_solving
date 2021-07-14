/*************************************************************************************
11729 하노이 탑 이동순서

1. 하노이 탑의 이동 원리 파악 → 출력
2. 하노이 탑의 이동 횟수 → 재귀식을 일반항으로 도출하여 주워진 판의 갯수를 통해 총 이동횟수를 알 수 있다.

>> 재귀

Created by 권상훈
*************************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int from, int via, int to) {
    if (n == 1) {
        printf("%d %d\n", from, to);
        return;
    }

    hanoi(n - 1, from, to, via);
    printf("%d %d\n", from, to);
    hanoi(n - 1, via, from, to);
    return;
}

int main()
{
    int n;
    cin >> n;

    printf("%d\n", (int)pow(2, n) - 1);

    hanoi(n, 1, 2, 3);
    return 0;
}
