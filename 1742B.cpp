// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=1;i<n;i++){
            if(arr[i-1]==arr[i]){
                count++;
            }
        }
        if(count!=0){
            cout<<"NO"<<'\n';
        }
        else {
            cout<<"YES"<<"\n";
        }
    }
}