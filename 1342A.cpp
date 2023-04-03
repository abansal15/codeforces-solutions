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
// #define for(i, n) for (int i = 0; i < n; i++)
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
    int t;
    cin >> t;
while(t--){
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int ans1,ans2;
    ans1=(abs(x-y)*a)+(min(x,y)*b);
    ans2=(x+y)*a;
    cout << min(ans1,ans2)<< '\n';
}
}
signed main()
{
    solve();
    return 0;
}