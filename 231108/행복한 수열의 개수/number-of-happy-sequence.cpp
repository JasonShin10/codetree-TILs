#include <iostream>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    int arr[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }


    for (int i = 0; i < n; i++) {
        int rCnt = 1;
        for (int j = 1; j < n; j++) {
            if (arr[i][j] == arr[i][j - 1]) {
                rCnt++;
            } else {
                if (rCnt >= m) {
                    ans++;
                    break;
                }
                rCnt = 1;
            }
        }
        if (rCnt >= m) ans++; 
    }


    for (int j = 0; j < n; j++) {
        int cCnt = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i][j] == arr[i - 1][j]) {
                cCnt++;
            } else {
                if (cCnt >= m) {
                    ans++;
                    break;
                }
                cCnt = 1;
            }
        }
        if (cCnt >= m) ans++; 
    }

    cout << ans;
    return 0;
}