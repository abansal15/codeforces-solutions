// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,max=0,index=0,count=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>max){
                max=a[i];
                index=i;
            }
        }
        //if(index==0 || index==n-1) cout<<"NO"<<'\n';
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                cout<<"YES"<<'\n';
                cout<<i<<" "<<i+1<<" "<<i+2<<'\n';
                count++;
                break;
            }
        }
        if(count==0){
            cout<<"NO"<<'\n';
        }
        
        
        
        // else {
        //     cout<<"YES"<<'\n';
        //     cout<<index<<" "<<index+1<<" "<<index+2<<'\n';
        // }
    }
}