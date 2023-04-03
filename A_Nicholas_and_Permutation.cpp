// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    int n;
    cin >> n;
    int a[n];
    int id1 = 0, id2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            id1 = i;
        if (a[i] == n)
            id2 = i;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        // swap(a[i],a[id1]);
        ans = max(ans, abs(i - id2));
    }
    for (int i = 0; i < n; i++)
    {
        // swap(a[i],a[id1]);
        ans = max(ans, abs(i - id1));
    }

    // if (abs(id1 - id2) == n - 1)
    // {
    //     cout << abs(id1 - id2);
    //     return;
    // }
    cout << ans;
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //  cin>>t;
    while (t--)
    {
        Haribol();
    }
}
