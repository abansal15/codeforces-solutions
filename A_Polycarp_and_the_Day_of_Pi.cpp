// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c=0;
        string s2="314159265358979323846264338327";
        for(int i=0;i<s.size();i++){
            if(s[i]==s2[i]){
                c++;
            }
            else {
                break;
            }
        }
        cout<<c<<'\n';
    }
}