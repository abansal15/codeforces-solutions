// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int x,y,k;
    cin >> x >> y >> k;
    if((y*k+k-1)%(x-1)==0)
    cout << (y*k+k-1)/(x-1) + k << "\n";
    else 
        cout << (y*k+k-1)/(x-1) + k+1 << "\n";
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
