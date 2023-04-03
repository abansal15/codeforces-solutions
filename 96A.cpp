// Jai shree ram
// Author - Ajaybansal
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define pi pair<int, int>
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x.begin().x.end())
#define for(i, n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ff first
#define ss second
#define Yes cout << "YES" << endl
#define No cout << "NO" << endl
#define int long long
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
signed solve()
{
    fast();
    string s;
    cin >> s;
    int n, sum = 1, flag = 0;
    n = s.size();
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] != s[i])
        {
            sum = 1;
        }
        else
        {
            sum += 1;
        }
        if (sum >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    if (sum<7)
    {
        cout << "NO" << endl;
        return 0;
    }
}
signed main()
{
    solve();
    return 0;
}