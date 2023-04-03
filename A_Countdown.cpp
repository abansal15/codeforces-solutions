// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            sum+=s[i]-'0';
            if(s[i]!='0'){
                c++;
            }
        }
        if(((s[n-1])-'0')!=0){
            cout<<sum+c-1<<'\n';
        }
        else {
            cout<<sum+c<<'\n';
        }
    }
}