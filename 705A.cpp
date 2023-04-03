//Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s1="I hate ";
    string s2="I love ";
    string s4="that ";
    string s5="it ";
    
for(int i=1;i<=n;i++){
    if(i%2!=0){
        cout<<s1;
    }
    else {
        cout<<s2;
    }
    if(i!=n){
        cout<<s4;
    }
    else {
        cout<<s5;
    }
}
    
}