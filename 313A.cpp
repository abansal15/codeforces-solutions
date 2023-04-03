// Jai shree ram
//Author - Ajay bansal
#include <bits/stdc++.h>
using namespace std;
#define vi                          vector<int>
#define vvi                         vector<vector<int>> 
#define pi                          pair<int, int>
#define ppb                         pop_back
#define pf                          push_front
#define ppf                         pop_front
#define all(x)                      (x.begin(). x.end())
#define for(i, n)                   for(int i = 0; i < n; i++)
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
int t,x;
cin >> t;
string s,s2,s3;
s=to_string(t);
s2=s.substr(0,s.size()-2);
//cout<<s2;
s3=s2+s[s.size()-1];
x=stoi(s3);
//cout<<x;
if(t>=0){
    cout<<s<<endl;
    return ;
  //  return 0;
}
else if(t%10==0 && t<0){
   // if()
//    cout<<s2<<s[s.size()-1]<<endl;
//    cout<<0<<endl;
      cout<<(x)<<endl;
      return ;
}
// else if(t%10==0 && t<0){
//     cout<<s2<<s[s.size()-1]<<endl;
//     return ;
// }
// else if(t%10!=0 && t<0){
//     cout<<s.substr(0,s.size()-1)<<endl;
//     return 0;
// }
else if(t<0&& t%10!=0){
    if(s[s.size()-1]>s[s.size()-2]){  // to remove last 2 second
        cout<<s.substr(0,s.size()-1)<<endl;
        return ;
    }
    else if(s[s.size()-1]<s[s.size()-2]){
        cout<<s2<<s[s.size()-1]<<endl;
        return ;
    }
    else if(s[s.size()-1]=s[s.size()-2]){
        cout<<s2<<s[s.size()-1]<<endl;
        return ;
    }
}
}
signed main()
{
solve();
//return 0;
}