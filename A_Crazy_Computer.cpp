// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    int n, c;
    cin >> n >> c;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ct = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] <= c)
        {
            ct++;
            //    cout << ct << "\n";
        }
        else
            ct = 1;
    }
    cout << ct;
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Haribol();
    }
}
