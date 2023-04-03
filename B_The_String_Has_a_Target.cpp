// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string x = s;
    sort(x.begin(), x.end());
    char te = x[0];

    cout << te;
    reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] == te)
        {
            s[i] = '@';
            break;
        }
    }
    reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '@')
        {
            cout << s[i];
        }
    }
    cout << '\n';
    return;
    // map<char, int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     mp[s[i]]++;
    // }
    // int ct = 0;
    // char y = 'z';
    // for (int i = 0; i < n; i++)
    // {
    //     if (i >= 1)
    //     {
    //         y = min(y, s[i - 1]);
    //     }
    //     mp[s[i]]--;
    //     if (mp[char(ct + 97)] > 0 and char(ct + 97) <= y)
    //     {
    //         x = char(ct + 97);
    //         //  cout << 1 << '\n';
    //         break;
    //     }
    //     else
    //     {
    //         ct++;
    //     }
    // }
    // if (x != '#')
    //     cout << x;
    // reverse(s.begin(), s.end());
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == x)
    //     {
    //         s[i] = '@';
    //         break;
    //     }
    // }
    // reverse(s.begin(), s.end());
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] != '@')
    //     {
    //         cout << s[i];
    //     }
    // }
    // cout << '\n';
    // return;
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
