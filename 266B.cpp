//Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    while(m--){
        for(int i=0;i<n;++i){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i+1],s[i]);
                 i++;
            }
           
        }
    }
    cout<<s;
}