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
    c -= 1;
    int l = c;
    int r = c;
    int ans = 0;
    if (a[c] == 1)
        ans++;
    for (int i = l-1, j = r+1;; i--, j++)
    {
        if (i >= 0 and j < n)
        {
            if (a[i] == 1 and a[j] == 1)
            {
                ans += 2;
            }
        }
        else if (i < 0 and j < n)
        {
            if (a[j] == 1)
            {
                ans++;
            }
        }
        else if (i >= 0 and j >= n)
        {
            if (a[i] == 1)
            {
                ans++;
            }
        }
        else
            break;
    }
    cout << ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //   cin >> t;
    while (t--)
    {
        Haribol();
    }
}
