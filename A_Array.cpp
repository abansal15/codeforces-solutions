//Jai shree ram
#include<bits/stdc++.h>
using namespace std;
#define scan(arr) for(auto &x : arr) cin>>x;
#define print(arr) for(auto &x : arr) cout<<x<<" "; cout<<endl;
int main(){
    int n,count=0,count1=0;
    cin>>n;
    int a[n];
    vector<int> v;
    scan(a);
    for(int i=0;i<n;i++){
        if(a[i]<0) {
            count++;
            v.push_back(a[i]);
        }
        if(a[i]>0){
            count1++;
        }
    }
    int x=v.size();
    int ans=v[x-1];
    int ans2=v[x-2];
    int ans3=v[x-3];
    if(count%2!=0 && count1!=0){
        cout<<count<<" ";
        for(int i=0;i<n;i++){
            if(a[i]<0){
                cout<<a[i]<<" ";
            }
        }
        cout<<'\n';
        cout<<n-count-1<<" ";
        for(int i=0;i<n;i++){
            if(a[i]>0){
                cout<<a[i]<<" ";
            }
        }
        cout<<"\n"<<1<<" "<<0;
    }
    if(count%2!=0 && count1==0){
        cout<<1<<" ";
        cout<<v[0]<<" ";
        cout<<"\n";
        cout<<count-1<<" ";
        for(int i=1;i<x;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        cout<<1<<" "<<0;
    }
    if(count%2==0 && count1!=0){
        v.pop_back();
        cout<<count-1<<" ";
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<'\n';
        cout<<n-count-1<<" ";
        for(int i=0;i<n;i++){
            if(a[i]>0) cout<<a[i]<<" ";
        }
        cout<<"\n";
        cout<<2<<" ";
        cout<<ans<<" "<<0<<'\n';
    }
    if(count%2==0 && count1==0){
        cout<<count-3<<" ";
        v.pop_back();
        v.pop_back();
        v.pop_back();
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<'\n';
        cout<<2<<" ";
        cout<<ans<<" "<<ans2<<" ";
        cout<<"\n";
        cout<<2<<" "<<0<<" "<<ans3;
    }
}