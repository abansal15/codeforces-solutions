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
//#define for(i, n) for (int i = 0; i < n; i++)
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
    int t, count = 1, sum = 1;
    cin >> t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        int x;
        cin >> arr[i];
        // cout<<s[i];
    }
    for(int i=1;i<t;i++)
    {
        if (arr[i] >= arr[i-1])
        {
            sum++;
        }
        else{
            sum=1;
        }
        if(sum>=count){
            count=sum;
        }
    }
    cout<<count<<endl;
    return 0;
}
signed main()
{
    solve();
}