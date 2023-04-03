// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s, ans, t;
    cin >> s >> t;
    map<char, int> mp;
    int x = s.size();
    for (int i = 0; i < x; i++)
    {
        mp[s[i]]++;
    }
    if (mp['a'] == 0 or mp['b'] == 0 or mp['c'] == 0)
    {
        for (auto it : mp)
        {
            for (int i = 0; i < it.second; i++)
            {
                cout << it.first;
            }
        }
        cout << "\n";
        return;
    }
    else if (t[1] == 'b' && t[0]=='a')
    {
        for (int i = 0; i < mp['a']; i++)
        {
            cout << 'a';
        }
        mp.erase('a');
        for (int i = 0; i < mp['c']; i++)
        {
            cout << 'c';
        }
        mp.erase('c');
        for (int i = 0; i < mp['b']; i++)
        {
            cout << 'b';
        }
        mp.erase('b');

        for (auto it : mp)
        {
            for (int i = 0; i < it.second; i++)
            {
                cout << it.first;
            }
        }
        cout << "\n";
        return;
    }
    else if (t[1] == 'c')
    {
        for (auto it : mp)
        {
            for (int i = 0; i < it.second; i++)
            {
                cout << it.first;
            }
        }
        cout << "\n";
        return;
    }
    else
    {
        for (auto it : mp)
        {
            for (int i = 0; i < it.second; i++)
            {
                cout << it.first;
            }
        }
        cout << "\n";
        return;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
