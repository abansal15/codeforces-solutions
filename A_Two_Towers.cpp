// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string s,s2;
        cin>>s>>s2;
        int c=0,d=0,e=0;
        int a,b;
        a=s.size();
        b=s2.size();
        if(s[a-1]==s2[b-1]){
            c++;
        }
        if(c==0){
            for(int i=1;i<a;i++){
                if(s[i]==s[i-1]){
                    d++;
                }
            }
            for(int i=1;i<b;i++){
                if(s2[i]==s2[i-1]){
                    e++;
                }
            }
            if(d+e<=1){
                cout<<"YES"<<'\n';
            }
            else 
            cout<<"NO"<<'\n';
        }
        else {
            for(int i=1;i<a;i++){
                if(s[i]==s[i-1]){
                    d++;
                }
            }
            for(int i=1;i<b;i++){
                if(s2[i]==s2[i-1]){
                    e++;
                }
            }
            if(d+e==0){
                cout<<"YES"<<'\n';
            }
            else 
            cout<<"NO"<<'\n';
        }

    }
    
}