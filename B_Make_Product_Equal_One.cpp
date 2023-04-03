// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,ans=0,count=0,counto=0;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0) counto++;
        if(a[i]<0) count++;
       // count+=abs(a[i]-1);
    }
    //cout<<count;
    if(count%2==0){
        for(int i=0;i<n;i++){
            if(a[i]<0) ans=ans+(-1-a[i]);
            else if(a[i]>0) ans+=a[i]-1;
            else if(a[i]==0) ans+=1;
        }
            cout<<ans<<endl;
            return 0;
    }
    else {
        if(count==1 && counto==1){
            ans=0;
            for(int i=0;i<n;i++)
            {
            if(a[i]<0)  ans=ans+(-1-a[i]);
            if(a[i]==0) ans+=1;
            if(a[i]>0)  ans+=a[i]-1;
            }
            cout<<ans<<endl;
            return 0;

        }
        if(count==1 && counto==0){
           
            for(int i=0;i<n;i++)
            {
            ans+=abs(a[i]-1);
            }
            //ans=ans-2;
            cout<<ans<<endl;
            return 0;
        
        }
        else {
            // for(int i=0;i<n;i++)
            // {
            // ans+=abs(a[i]-1);
            // }
            // ans=ans-2;
            // cout<<ans<<endl;
            // return 0;
            if(counto==0){
            ans=0;
            for(int i=0;i<n;i++)
            {
            if(a[i]<0)  ans=ans+(-1-a[i]);
            if(a[i]==0) ans+=1;
            if(a[i]>0)  ans+=a[i]-1;
            }
            cout<<ans+2<<endl;
            return 0;
            }
            if(counto!=0){
            ans=0;
            for(int i=0;i<n;i++)
            {
            if(a[i]<0)  ans=ans+(-1-a[i]);
            if(a[i]==0) ans+=1;
            if(a[i]>0)  ans+=a[i]-1;
            }
            cout<<ans<<endl;
            return 0;
            }
        }
    }
    cout<<ans;
}