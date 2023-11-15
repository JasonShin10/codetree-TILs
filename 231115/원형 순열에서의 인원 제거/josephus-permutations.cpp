#include <iostream>
#include <queue>

using namespace std;

queue<int> q;
int main() {
    int N,K;
    cin >> N >> K;
    for(int i=1; i<=N; i++)
    {
        q.push(i);
    }
    int cnt =1;
    while(!q.empty())
    {
        if(cnt != K)
        {
            cnt++;
            q.push(q.front());
            q.pop();
        }
        else 
        {
            cout << q.front() << " ";
            q.pop();
            cnt =1;
        }
    }
    return 0;
}