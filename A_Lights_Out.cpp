// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    deque<int> dq;
    dq.pop_front();
    int a[5][5] = {0};
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << 1-(a[i][j]+a[i-1][j]+a[i][j-1]+a[i+1][j]+a[i][j+1])%2; 
        }
        cout << "\n";
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
