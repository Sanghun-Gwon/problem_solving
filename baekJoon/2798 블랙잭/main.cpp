/*************************************************************************************
1002 터렛

>> 완전탐색 이용

Created by 권상훈
*************************************************************************************/


#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int arr[100];
    cin >> n >> m;
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    int max = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n && i!=j; j++ ) {
            for (int k = 0;k < n && i!=k && j!=k; k++) {
               
                int sum = arr[i] + arr[j] + arr[k];
                if (sum <= m && sum > max)
                    max = sum;
            }
        }
    }

    cout << max << endl;
}
