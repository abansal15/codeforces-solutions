// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        float a;
        cin>>a;
        float d=(360)/(180-a);
       // cout<<d;
        int s=d;
       // cout<<s<<" "<<d;
        if(s!=d) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
    
}