// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, k;
    cin >> n >> k;
    int h[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    int pfs[n];
    pfs[0] = h[0];
    for (int i = 1; i < n; i++)
    {
        pfs[i] = h[i] + pfs[i - 1];
    }
    //  cout << pfs[n-1] << " ";
    int ind = 0;
    int sum = INT_MAX;
    if (n >= 3)
    {
        if (pfs[k - 1] < sum)
        {
            sum = pfs[k - 1];
            ind = 0;
        }
        // sum = min(sum, pfs[2]);
        for (int i = k; i < n; i++)
        {
            if (pfs[i] - pfs[i - k] < sum)
            {
                sum = pfs[i] - pfs[i - k];
                ind = i + 1 - k;
            }
        }
        cout << ind + 1;
        return;
    }
    else if (n == 2)
    {
        if (k == 1)
        {
            if (h[0] < h[1])
            {
                cout << 1;
                return;
            }
            else
                cout << 2;
        }
        else
        {
            cout << 1;
            return;
        }
    }
    else
    {
        cout << 1;
        return;
    }
    // cout << ind + 1;
    // return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
