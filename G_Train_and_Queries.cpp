// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        /* code */
        int a, b;
        cin >> a >> b;
        map<int, vector<int>> mp;
        for (int i = 1; i <= a; i++)
        {
            int d;
            cin >> d;
            mp[d].push_back(i);
        }
        while (b--)
        {
            /* code */
            int x, y;
            cin >> x >> y;
            if (mp.count(x) == 0 || mp.count(y) == 0)
            {
                cout << "NO" << '\n';
                continue;
            }
            else
            {
                // cout << 1;
                int gh;
                gh = mp[x][0];
                if (upper_bound(mp[y].begin(), mp[y].end(), gh) == mp[y].end())
                {
                    cout << "NO" << '\n';
                }
                else
                {
                    cout << "YES"
                         << "\n";
                }
            }
        }
    }
}
// find(v.begin(),v.end(),x)
