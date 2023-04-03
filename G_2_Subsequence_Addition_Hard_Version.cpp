// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if (n == 1)
    {
        if (a[0] == 1)
        {
            cout << "YES" << '\n';
            return;
        }
        else
        {
            cout << "NO"
                 << "\n";
            return;
        }
    }
    else
    {
        int ct = 0;
        int sum=a[0]+a[1];
        for (int i = 2; i < n; i++)
        {
            sum+=a[i];
            if(a[i]>=1 and a[i] <=(sum-a[i]))
            {
                continue;
            }
            else 
            {
             //   cout << "NO" <<" " << a[i]<<"\n";
                cout << "NO" <<"\n";
                return;
            }
        }

            cout << "YES" << '\n';
            return;
    }
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
