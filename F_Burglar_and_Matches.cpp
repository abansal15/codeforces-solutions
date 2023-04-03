// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    //int pick=0;
    int n,m,sum=0,ans=0;
    cin>>n>>m;
    vector<pair<int,int>> v;
    // map<int,int> v;
    // vector<int> v2;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({y,x});
        // v2.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    for(auto it:v){
        int pick=min(n,it.second);
        n-=pick;
      //  pick=n-it.first;
        ans+=(pick*it.first);
      //  cout<<ans<<endl;
        if(n==0) break;    
    }
    cout<<ans<<'\n'; 
}