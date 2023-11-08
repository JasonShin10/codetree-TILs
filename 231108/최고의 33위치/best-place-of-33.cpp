#include <iostream>
#include <climits>

using namespace std;
int cnt;
int main() {
    int N;
    int arr[20][20];
    cin >> N;
    int max =INT_MIN;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(i+2<=N && j+2<=N)
            {
                cnt=0;
               for(int k=i; k<i+2; k++)
               {
               for(int l=j; l<j+2; l++)
               {
                if(arr[k][l] = 1)
                {
                    cnt++;
                }
                }
                }
                if(max < cnt)
                {
                    max = cnt;
                }
            }
           
        }
    }
    cout << max;
    
    return 0;
}