//Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,count=0,ans=0;
        cin>>a>>b;
        if(a%b==0) cout<<0<<'\n';
        else
        cout<<(b-(a%b))<<'\n';
    }
}