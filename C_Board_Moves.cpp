// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
# define int long long
void solve()
{
    int x;
    cin >> x;
    int n=x/2;
    cout << 8*(n*(n+1)*(2*n + 1))/6 <<'\n';
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
