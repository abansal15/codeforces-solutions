// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+(pow(-1,i)*i);
    }
    cout<<sum<<'\n';
}