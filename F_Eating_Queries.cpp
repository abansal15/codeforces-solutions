// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,count=1;
        cin>>a>>b;
        int z[a+1]={0};
        int pf[a+1]={0};
     //   map<int,int,greater<int>> m;
        z[0]=0;
        for(int i=1;i<=a;i++){
            cin>>z[i];
        //    cout<<z[i]<<'\n';
        }
        sort(z,z+a+1,greater<int>());
        pf[0]=z[0];
        for(int i=1;i<=a;i++){
            pf[i]=pf[i-1]+z[i];
        }
        for(int i=0;i<b;i++){
            int s;
            cin>>s;
            if(pf[a]<s){
                cout<<-1<<'\n';
            }
            else {
                cout<<lower_bound(pf,pf+a,s)-pf+1<<'\n';
            }
        }
    }
}