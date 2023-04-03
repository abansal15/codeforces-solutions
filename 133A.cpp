// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            flag++;
        }
    }
    if(flag!=0){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}