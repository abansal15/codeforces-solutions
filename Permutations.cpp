//Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==2|| n==3) {
        cout<<"NO SOLUTION";
        return 0;
        }
    if(n==4) cout<<2<<" "<<4<<" "<<1<<" "<<3;
    else {
        if(n%2!=0){
        for(int i=n-1;i>0;i=i-2) cout<<i<<" ";
        }
        if(n%2!=0)
        for(int i=n;i>0;i=i-2) cout<<i<<" ";

        if(n%2==0){
        for(int i=n;i>0;i=i-2) cout<<i<<" ";
        }
        if(n%2==0)
        for(int i=n-1;i>0;i=i-2) cout<<i<<" ";
    }
}