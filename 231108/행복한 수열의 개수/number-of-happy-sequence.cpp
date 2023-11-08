#include <iostream>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int rCnt = 1;
    int cCnt = 1;
    bool rSame = false;
    bool cSame = false;
    int ans = 0;
    int arr[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
        if (m == 1) 
        {
        cout << 2 * n; 
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        rCnt = 1;
        for (int j = 1; j < n; j++)
        {
        
                if (arr[i][j - 1] == arr[i][j])
                {
                    rCnt++;
                }
                else
                {
                    if (rCnt >= m)
                    {
                        ans++;
                        break;
                    }
                    rCnt = 1;
                }
            
        }
        if (rCnt >= m) ans++;
        cCnt = 1;
        for (int j = 1; j < n; j++)
        {        
             if (arr[j - 1][i] == arr[j][i])
                {
                    cCnt++;
                }
                else 
                {
                    if (cCnt >= m)
                    {
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