// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    int neg=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]<0) neg++;
    }
    sort(a, a + n, greater<int>());
    int pos = 0, ind = -1;
    for (int i = 0; i < n && a[i] > 0; i++)
    {
        pos++;
        ind=i;
        cout << pos << " ";
    }
    int poss=pos;
    for (int i = ind+1; i < n; i++)
    {
        pos--;
        cout << (pos) << " ";
    }
    cout << "\n";
    for (int i = 0; i < neg; i++)
    {
        cout <<1<<" "<<0<<" ";
        poss--;
    }
    for (int i = 1; i <= poss; i++)
    {
        cout << i <<" ";
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
        solve();
    }
}
