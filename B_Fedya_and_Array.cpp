// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans1;
        ans1 = 2 * (a - b);
        cout << ans1 << "\n";
        // if (a > 0)
        // {
        //     for (int i = 0; i < abs(a); i++)
        //     {
        //         cout << 0 << " " << 1 << " ";
        //     }
        //     for (int i = 0; i < abs(b); i++)
        //     {
        //         cout << 0 << " " << -1 << " ";
        //     }
        //     cout << '\n';
        // }
        // else if (a == 0)
        // {
        //     for (int i = 0; i < ans1 / 2; i++)
        //     {
        //         cout << 0 << " " << -1 << " ";
        //     }
        //     cout << '\n';
        // }
        // else if (a < 0)
        // {
        //     for (int i = b; i <= a; i++)
        //     {
        //         cout << i << " ";
        //         ans1--;
        //     }
        //     while (ans1)
        //     {
        //         cout << a - 1 << " ";
        //         ans1--;
        //         a--;
        //     }
        //     cout << "\n";
        // }
        for (int i = a; i >= b; i--)
        {
            cout << i << " ";
        }
        for (int i = b + 1; i < a; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

// 4 3 2 1 0 -1 -2 -3 -4