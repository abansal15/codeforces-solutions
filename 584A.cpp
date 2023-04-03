// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string s;
    
    if(n==1 && t<10){
        cout<<t<<endl;
        return 0;
    }
    else if(t>(pow(10,n-1))){
        cout<<-1<<endl;
        return 0;
    }
    // for(long long int i=pow(10,n-1);i<pow(10,n);i++){
    //     if((i%t)==0){
    //         cout<<i<<endl;
    //         return 0;
    //     }
    // }
    for(int i=1;i<=n;i++){
        cout<<t;
    }
}