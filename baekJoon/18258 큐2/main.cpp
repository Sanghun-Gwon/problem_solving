/*************************************************************************************
18258 큐2

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
    int t, num;
    string cmd;
    cin >> t;

    while (t--) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> num;
            q.push(num);
        }
        else if (cmd == "pop") {
            if (q.empty()) {
                cout << "-1\n";
            }
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (cmd == "front") {
            if(q.empty()){
                cout << "-1\n";
            }
            else {
                cout << q.front() << "\n";
            }
        }
        else if (cmd == "back") {
            if (q.empty()) {
                cout << "-1\n";
            }
            else {
                cout << q.back() << "\n";
            }
        }
        else if (cmd == "size") {
            cout << q.size() << "\n";
        }
        else if (cmd == "empty") {
            cout << q.empty() << "\n";
        }
    }

    
    return 0;
}
