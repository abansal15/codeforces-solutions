// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,tsum=0,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        tsum+=a[i];
    }
    sort(a,a+n,greater<int>());
    int msum=0;
    for(int i=0;i<n;i++){
        if(2*msum<=tsum){
            ans++;
            msum+=a[i];
        }
    }
    cout<<ans;
}