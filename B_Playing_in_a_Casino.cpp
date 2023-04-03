// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    int n, m;
    cin >> n >> m;
    vector<int> v[m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x; cin >> x;
            v[j].push_back(x);
        }
    }
    for (int i = 0; i < m; i++)
    {
        sort(v[i].begin(),v[i].end());
    }
    int ans = 0;
    
    
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
