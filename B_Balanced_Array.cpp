//Jai shree ram
#include<bits/stdc++.h>
using namespace std;
void solve(){
    
        int n,sum=0,count=0;
        cin>>n;
        if(n==2 || (n/2)%2!=0){
            cout<<"NO"<<'\n';
            return;
        }
        else {
            cout<<"YES"<<'\n';
            for(int i=2;i<=n;i=i+2){
                cout<<i<<" ";
                sum=sum+i;
            }
            for(int i=1;i<n-2;i=i+2){
                cout<<i<<" ";
                count=count+i;
            }
            cout<<(sum-count)<<'\n';
        }
    }

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}