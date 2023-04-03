// Jai shree ram
// Author - Ajaybansal
#include <bits/stdc++.h>
using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve()
{
    fast();
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        a[x - 1] = i + 1;
    }
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}
signed main()
{
    solve();
}
