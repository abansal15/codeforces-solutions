// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,co=0,ce=0,cc=0,cv=0;
        cin>>n;
        int a[n];
        #define scan(arr) for(auto &x : arr) cin>>x;
        #define print(arr) for(auto &x : arr) cout<<x<<" "; cout<<endl;
        scan(a);
        for(int i=0;i<n;i++){
            if(a[i]==1) cv++;
        }
        long long ans=n-cv+cv/2;
        if(cv%2!=0){
            ans=ans+1;
        }
        cout<<ans<<'\n';

    }
    }
