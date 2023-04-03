// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    int s[5];
    int a[5];
    int w[5];
    // 500, 1000, 1500, 2000, and 2500
    s[0] = 500;
    s[1] = 1000;
    s[2] = 1500;
    s[3] = 2000;
    s[4] = 2500;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> w[i];
    }
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        int ans2 = (s[i] * 3) / 10;
        ans += (int)max(ans2, ((s[i] - (a[i] * s[i]) / 250)) - (50 * w[i]));
       // cout << ans << '\n';
    }
    int hs;
    int hu;
    cin >> hs >> hu;
    ans += 100 * (hs);
    ans -= 50 * (hu);
    cout << ans;
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
