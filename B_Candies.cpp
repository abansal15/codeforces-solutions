// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << -1 << '\n';
        return;
    }
    if (n == 3)
    {
        cout << 1 << '\n';
        cout << 2 << '\n';
        return;
    }
    vector<int> ans;
    for (int i = 0; n != 3; i++)
    {
        int x = (n + 1) / 2; // spell 1;
        int y = (n - 1) / 2; // spell 2;
        if (x & 1)
        {
            ans.push_back(1);
            n = x;
        }
        else
        {
            ans.push_back(2);
            n = y;
        }
        if (n == 3)
        {
            ans.push_back(2);
            break;
        }
    }
    cout << ans.size() << '\n';
    reverse(ans.begin(),ans.end());
    for (auto it :ans)
    {
        cout << it << " ";
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
        Haribol();
    }
}
