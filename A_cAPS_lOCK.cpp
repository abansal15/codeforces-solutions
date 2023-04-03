// Jai shree ram
#include<bits/stdc++.h>
#define lower(c) (char)(c | ' ')
#define upper(c) (char)(c & '_')

using namespace std;
int main(){
    int count=0,count2=0;
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[0]==lower(s[0]) && s[i]==upper(s[i])){
            count++;
        }
        if(s[i]==lower(s[i])) count2++;
    }
   // cout<<count;
   if(count==s.size()-1){
    for(int i=0;i<s.size();i++){
        if(s[i]==lower(s[i])) cout<<upper(s[i]);
        else cout<<lower(s[i]);
    }
    cout<<'\n';
    return 0;
   }
   if(count2==0){
    for(int i=0;i<s.size();i++){
        cout<<lower(s[i]);
    }
    cout<<'\n';
   }
   else cout<<s;
}