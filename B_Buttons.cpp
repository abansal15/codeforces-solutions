//Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int fac(int n){
    if(n==1||n==0){
        return 1;
    }
    return n*fac(n-1);
}
int main(){
    long long int x;
    cin>>x;
    // int ans=fac(x);
    // cout<<ans+1
    cout<<(x*((x-1)*(x)/2))-((x-1)*x*(2*x-1)/6)+x;

}