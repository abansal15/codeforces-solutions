// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //cout << n;
    vector<pair<int, int>> v(n);
    for(int i =0 ; i < n ; i++)
    {
        /* code */

        // int a, b;
        // cin >> a >> b;
        // // coun << a << b <<'\n';
        // v.push_back({a, b});
        cin>>v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());
    int ans = -1;
   // cout << n;
    for (int i = 0; i < n; i++)
    {
       // cout << 2 << '\n';
      //  cout << v[i].first << " " << v[i].second << '\n';
        if (ans <= v[i].second)
        {
            ans = v[i].second;
        }
        else
        {
            ans = v[i].first;
        }
    }
   cout << ans;
}