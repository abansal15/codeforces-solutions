// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,z;
   cin>>n;
   int a[n];
   int max=0;
   map<int,int> m;
   for(int i=0;i<n;i++){
    cin>>z;
    m[z]++;
   }
   for(auto &it:m){
    if(it.second>max){
        max=it.second;
    }
   }
   cout<<max;
}