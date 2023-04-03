// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s;
    cin >> s;
    map<char, int> mp;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for (int i = 0; i < 4; i++)
    {
        mp[s[i]]++;
    }
    if (mp.size() == 4)
    {
        cout << 4 << '\n';
        return;
    }
    else if (mp.size() == 3)
    {
        cout << 4 << '\n';
        return;
    }
    else if (mp.size() == 1)
    {
        cout << -1 << '\n';
        return;
    }
    else
    {
        for(auto it:mp)
        {
            if(it.second==2)
            {
                cout << 4 << '\n';
                return;
            }
        }
        cout << 6 << '\n';
        return;
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
