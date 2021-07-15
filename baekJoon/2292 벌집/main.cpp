 /*************************************************************************************
2292 벌집

1. 1 입력시 바로 출력
2. i = 1, j = 7 → n>i && n<=j :: (탈출조건)
3. i += 6 * (cnt - 1), j += 6 * (cnt) :: (구역설정)
>>구현

Created by 권상훈
*************************************************************************************/

#include<iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    unsigned int n;
    cin >> n;
    int cnt = 1;

    if (n == 1) {
        cout << cnt ;
        return 0;
    }

    for (int i = 1, j = 7; ; i += 6 * (cnt - 1), j += 6 * (cnt)) {
        cnt++;
        if (n > i && n <= j) {
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}
