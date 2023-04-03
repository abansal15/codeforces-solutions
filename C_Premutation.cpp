// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m1=0,m2=0,d=0;
        cin>>n;
        int a[n][n-1];
        int ans[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++){
                cin>>a[i][j];
            }
        }
        int b=a[0][0];
        for(int i=0;i<n;i++){
            if(a[i][0]==b)
            {
                m1++;
            }
            else {
            m2++;
            d=a[i][0];
            }
        }
        if(m1>m2){
        cout<<b<<" ";
        for(int i=0;i<n;i++){
            if(a[i][0]!=b){
                for(int j=0;j<n-1;j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<"\n";
            }
            
        } 
        }
        else {
        cout<<d<<" ";
        for(int i=0;i<n;i++){
            if(a[i][0]!=d){
                for(int j=0;j<n-1;j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<"\n";
            }
        }
        }


    }
}