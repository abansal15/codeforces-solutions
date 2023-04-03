// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans1,ans2;
    ans1=max(3*a/10,a-(a/250)*c);
    ans2=max(3*b/10,b-(b/250)*d);
    if(ans1>ans2)
    cout<<"Misha";
    else if(ans2>ans1)
    cout<<"Vasya";
    else 
    cout<<"Tie";
}