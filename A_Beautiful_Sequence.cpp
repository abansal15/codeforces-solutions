// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    int n;
    cin >> n;
    bool cond = false;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= i + 1)
        {
            cond = true;
        }
    }
    if (cond)
    {
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << '\n';
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
        Haribol();
    }
}
