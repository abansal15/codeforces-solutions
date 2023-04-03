// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
# define int long long
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int a2[n-1];
    int a3[n-2];
    int sum1=0;
    int sum2=0,sum3=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum1+=a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        cin >> a2[i];
        sum2+=a2[i];
    }
    for (int i = 0; i < n-2; i++)
    {
        cin >> a3[i];
        sum3+=a3[i];
    }
    cout << sum1-sum2 << '\n' << sum2 - sum3 << "\n";
    return;
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t =1;
   // cin>>t;
    while(t--)
     {
       solve();
	}

}
