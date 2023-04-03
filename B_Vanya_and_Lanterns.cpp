// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a, b;
    cin >> a >> b;
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + a);
    int rad;
    // rad = (ar[0] - 0);
    rad = max((ar[0] - 0), b - ar[a - 1]) * 2;
    for (int i = 1; i <= a - 1; i++)
    {
        if ((ar[i] - ar[i - 1]) > rad)
        {
            rad = (ar[i] - ar[i - 1]);
        }
    }
    // cout << ar[0] << '\n';
    // printf("%0.10f", rad);
    cout << fixed << setprecision(10) << rad / 2.0 << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //  cin>>t;
    while (t--)
    {
        solve();
    }
}
// 0  3  5  7  9  14  15
//  1.5 1  1  1  2.5  0.5