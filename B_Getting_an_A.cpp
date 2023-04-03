// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    int sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    // cout << sum << " ";
    float avg = 1.0 * (1.0 * sum / n);
  //  cout << avg << '\n';
    if (avg >= 4.5)
    {
        cout << 0;
        return;
    }
    else if (avg < 4.5)
    {
        sort(v.begin(), v.end());
        int ct = 0;
      //  cout << 1 << '\n';
        for (int i = 0; i < n; i++)
        {
            sum = sum - v[i];
         //   cout << v[i] << '\n';
            v[i] = 5;
            sum += 5;
         //   cout << sum << '\n';
            avg = 1.0 * (1.0 * sum / n);
            ct++;
            if (avg >= 4.5)
            {
         //       cout << avg << '\n';
                cout << ct;
                return;
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //  cin>>t;
    while (t--)
    {
        solve();
    }
}
