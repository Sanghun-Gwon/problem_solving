/*************************************************************************************
2164 카드 2

>>queue 이용

Created by 권상훈
*************************************************************************************/
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    queue<int> q;
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        q.push(i);
    }

    while (q.size() > 1) {
        q.pop();
        if (q.size() == 1) {
            break;
        }

        q.push(q.front());
        q.pop();
    }
    
    cout << q.front() << endl;

    return 0;
}
