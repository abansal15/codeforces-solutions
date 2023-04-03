// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define scan(arr) for(auto &x : arr) cin>>x;
#define print(arr) for(auto &x : arr) cout<<x<<" "; cout<<endl;
int main()
{
    int t;
    cin>>t;
    unordered_set <int> s;
    unordered_map<int,int> mp;
    vector<int> v;
   // unordered_set<int> s2;
    int ar[t];
    scan(ar);
    for(int i=t-1;i>=0;i--){
      //  cout<<ar[i]<<" ";
        s.insert(ar[i]);
        // mp[ar[i]]++;
        // if(mp[ar[i]]==1){
        //     cout<<ar[i]<<" ";
        // }
    }
    cout<<s.size()<<'\n';
    for(int i=t-1;i>=0;i--){
        mp[ar[i]]++;
        if(mp[ar[i]]==1){
            v.push_back(ar[i]);
        }
    }
    reverse(v.begin(),v.end());
     for(auto it:v){
        cout<<it<<" ";
    }
}
