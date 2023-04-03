//Jai shree ram
//Author - Ajaybansal
#include <bits/stdc++.h>
using namespace std;
#define vi                          vector<int>
#define vvi                         vector<vector<int>> 
#define pi                          pair<int, int>
#define ppb                         pop_back
#define pf                          push_front
#define ppf                         pop_front
#define all(x)                      (x.begin(). x.end())
#define for(i, n)                for(int i = 0; i < n; i++)
#define endl                        "\n"
#define ff                          first
#define ss                          second
#define Yes                         cout << "YES" << endl
#define No                          cout << "NO" << endl
#define int                         long long
void fast()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
}
void solve()
{
fast();
int n,k,l,c,d,p,nl,np,ans1,ans2,ans3,ans4;
cin >>n>>k>>l>>c>>d>>p>>nl>>np;
ans1=(k*l)/nl;
ans2=(c*d);
ans3=p/np;
ans4=min(ans1,ans2);
cout<<(min(ans4,ans3))/n<<endl;
}
signed main()
{
solve();
}