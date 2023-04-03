// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
# define int long long
void solve()
{
    int n,c1=0,c2=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
        {
            c1+=a[i];
        }
        else
        {
            c2+=a[i];
        }
    }
    if(c1>c2)
    {
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
        return;
    
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
