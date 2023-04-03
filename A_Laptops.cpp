// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if((b-a)<0) {
            c++;
            break;}
    }
    if(c==0) cout<<"Poor Alex";
    else cout<<"Happy Alex";
}