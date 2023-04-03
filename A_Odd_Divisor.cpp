// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 0;
        cin >> n;
        int x = __builtin_popcount(n);
        if (n % 2 != 0)
        {
            cout << "YES" << '\n';
        }
        else
        {
            while (n)
            {
                n /= 2;
                if (n % 2 != 0)
                    f++;
            }
            if (f == 1)
            {
                cout << "NO"
                     << "\n";
            }
            else
            {
                cout << "YES"
                     << "\n";
            }
        }
        // else if (x > 1)
        // {
        //     cout << "YES" << '\n';
        // }
        // else
        // {
        //     cout << "NO" << '\n';
        // }
    }
}

// 1099511627776