// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c,count=0;
    while(t--){
        
        cin>>a>>b>>c;
        if(a==1 && b==1 || b==1 && c==1 || a==1 && c==1){
            count++;
        }
       
    }
    cout<<count;
}