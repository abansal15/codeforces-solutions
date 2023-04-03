// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>>t;
    for(int i=t+1;;i++){
        a=i%10;
        b=(i/10)%10;
        c=(i/100)%10;
        d=(i/1000);
        if(a!=b && b!=c && c!=d && a!=c && a!=d && b!=d){
            cout<<i<<'\n';
            break;
        }
    }
}