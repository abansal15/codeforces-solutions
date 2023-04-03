//Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    // cout<<s;
    
    int a=0,d=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') a++;
        else d++;
    }
    //cout<<a<<" "<<d;
    a>d?cout<<"Anton"<<endl:a==d?cout<<"Friendship"<<endl:cout<<"Danik"<<endl;

}