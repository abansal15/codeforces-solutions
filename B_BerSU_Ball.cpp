// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int n2;
    cin >> n2;
    int g[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> g[i];
    }
    int ans = 0;
    int count = 0;
    sort(b,b+n);
    sort(g,g+n2);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (abs(b[i] - g[j]) <= 1)
            {
                ans++;
               // b[i] = -100;
                g[j] = -100;
                break;
            }
        }
    }
    // for (auto it : b)
    // {
    //     for (auto iti : g)
    //     {
    //         if (abs(it - iti) == 1 or it - iti == 0 and it != -1 and iti != -1)
    //         {
    //             ans++;
    //             // cout << it <<" " << iti << "\n";
    //             it = -1;
    //             iti = -1;
    //         }
    //     }
    // }
    // cout << b[0] <<" ";
    cout << ans;
    return;
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
