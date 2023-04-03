// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            swap(a[i], b[i]);
        }
    }
    int y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        y = max(y, a[i]);
        z = max(z, b[i]);
    }
    if(y!=a[n-1] || z!=b[n-1])
    {
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';
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
