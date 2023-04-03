// Jai shree ram
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
//#define for(i, n)                   for(int i = 0; i < n; i++)
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
signed solve()
{
fast();
int t,ans=0;
cin >> t;
string s;
cin>>s;
unordered_map<char,int> m;
for(int i=0;i<s.size();i++){
    if(islower(s[i])){
        m[s[i]]++;
    }
    else if(isupper(s[i])){
        if(m[tolower(s[i])]>0){
            m[tolower(s[i])]--;
        }
        else {
            ans++;
        }
    }
}
cout<<ans<<endl;
return 0;
}
signed main()
{
solve();

}