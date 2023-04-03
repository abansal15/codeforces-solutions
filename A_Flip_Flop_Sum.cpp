// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0,s=0,b=-1,d=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==-1)
            c++;
            if(a[i]==1)
            d++;
            s+=a[i];
        }
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1] && a[i]==-1){
                b=i-1;
                break;
            }
        }
        if(c==0){
            cout<<s-4<<"\n";
        }
        else if(d==0){
            cout<<s+4<<'\n';
        }
        else {
            if(b==-1){
                cout<<s<<'\n';
            }
            else{
                cout<<s+4<<'\n';
            }
        }
    }
}