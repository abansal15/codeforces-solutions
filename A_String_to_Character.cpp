// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s;
    cin >> s;
    int x = s.size();
    map<char, int> m;
    for (int i = 0; i < 26; i++)
    {
        m[(char)(i + 97)] = 1;
    }
    for (int i = 0; i < x; i++)
    {
        m[s[i]] = 0;
    }
    for(auto it:m)
    {
        if(it.second==1)
        {
            cout << it.first;
            return;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //   cin>>t;
    while (t--)
    {
        solve();
    }
}