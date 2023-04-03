// Jai shree ram
#include<bits/stdc++.h>
#define scan(arr) for(auto &x : arr) cin>>x;
#define print(arr) for(auto &x : arr) cout<<x<<" "; cout<<endl;
using namespace std;
int main(){
    int a,b,c;
    int arr[3];
    scan(arr);
    sort(arr,arr+3);
   // int avg=(a+b+c)/3;
    cout<<(arr[1]-arr[0]+arr[2]-arr[1]);
}