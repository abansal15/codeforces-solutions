// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s;
    cin >> s;
    int x = s.size();
    string ans = "";
    // if (s[0] == '.')
    // {
    //     ans += '0';
    // }
    for (int i = 0; i <= x - 1; i++)
    {
        // if (s[i] == '.')
        // {
        //     ans += '0';
        //     continue;
        // }
        if (s[i] == '-' and s[i + 1] == '-')
        {
            ans += '2';
            i++;
            continue;
        }
        else if (s[i] == '-' and s[i + 1] == '.')
        {
            ans += '1';
            i++;
            continue;
        }
        else if (s[i] == '.' and i == x - 1)
        {
            ans += '0';
            continue;
        }
        else if (s[i] == '.' and s[i + 1] == '-')
        {
            ans += '0';
            continue;
        }
        else if (s[i] == '.' and s[i + 1] == '.')
        {
            ans += '0';
            continue;
        }
    }
    cout << ans;
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
