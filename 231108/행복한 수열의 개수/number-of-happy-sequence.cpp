#include <iostream>

using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int rCnt=0;
    int cCnt=0;
    bool rSame =false;
    bool cSame =false;
    int ans=0;
    int arr[100][100];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
        cin >> arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j-1>0)
            {
                if(arr[i][j-1] == arr[i][j])
                {
                rCnt++;
                }
                else
                {
                    if(rCnt >= m-1)
                    {
                        ans++;
                    }
                        rCnt=0;
                }
                if(arr[j-1][i] == arr[j][i])
                {
                cCnt++;
                }
                else{
                    if(cCnt >= m-1)
                    {
                        ans++;
                    }
                        cCnt=0;
                }
            }
        }
        
    }
    cout << ans;
    return 0;
}