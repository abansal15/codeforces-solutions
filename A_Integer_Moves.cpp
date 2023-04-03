//Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float a,b;
        cin>>a>>b;
        if(a==0 && b==0){
            cout<<0<<'\n';
            continue;
        }
        float x;
        x=sqrt(pow(a,2)+pow(b,2));
        int y=sqrt(pow(a,2)+pow(b,2));
        if(x==y){
            cout<<1<<'\n';
        }
        else {
            cout<<2<<'\n';
        }
    }
}