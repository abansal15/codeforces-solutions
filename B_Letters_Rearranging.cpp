// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s;
    cin >> s;
    int x = s.size();
    int flag = 0;
    for (int i = 1; i < x; i++)
    {
        if (s[i] != s[i - 1])
            flag++;
    }
    if (flag == 0)
    {
        cout << -1 << '\n';
        return;
    }
    map<char,int> mp;
    for (int i = 0; i < x; i++)
    {
        mp[s[i]]++;
    }
    for(auto it:mp)
    {
        for (int i = 0; i < it.second; i++)
        {
            /* code */
            cout << it.first;
        }   
    }
    cout << '\n';
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
        solve();
    }
}
