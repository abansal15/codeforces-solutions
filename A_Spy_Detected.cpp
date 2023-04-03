// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
# define int long long
void solve()
{
    int n,y=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        /* code */
        if(a[i]!=a[i-1] && a[i]!=a[i+1])
        {
            cout << i + 1 << '\n';
            return;
        }
        if(a[i]!=a[i-1] && a[i]==a[i+1])
        {
            cout << i << '\n';
            return;
        }
        if(a[i]==a[i-1] && a[i]!=a[i+1])
        {
            cout << i + 2 << '\n';
            return;
        }
    }
    
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
     {
       solve();
	}

}
