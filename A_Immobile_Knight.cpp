// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==2 && b==3 || a==3 && b==2 or a==3 && b==3){
            cout<<2<<" "<<2<<'\n';
        }
        // else if(a==3 && b==3){
        //     cout<<2<<" "<<2<<'\n';
        // }
        else{
            cout<<a<<" "<<b<<'\n';
        }
    }
}