// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == c)
    {
        cout << "-1"
             << " "
             << "2\n";
    }
    else if (a > c)
        cout << "-1"
             << " "
             << "1\n";
    else
    {
        if (c / b < a)
        {
            cout << 1 <<" "<< b << '\n';
        }
        else 
        {
            cout << 1 << " " << -1 << '\n';
        }
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
