// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort(a, a + n);
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 5 - k)
        {
            ct++;
        }
    }
    cout << ct/3;
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
