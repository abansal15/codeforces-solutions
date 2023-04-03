// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
//     vector<pair<string,string>> v;
//     for(int i=0;i<m;i++){
//         string s1,s2;
//         cin>>s1>>s2;
    
//         for(int i=0;i<m;i++){
//             v.push_back({s1,s2});
//         }
//     }
//     for(int i=0;i<n;i++){
//         string s3;
//         cin>>s3;
//     for(int j=0;j<m;j++){
//         if(v[j].first==s3){
//             if(v[j].second.size()>s3.size()){
//                 cout<<s3<<" ";
//             }
//             else {
//                 cout<<v[j].second<<" ";
//             }
//         }
//     }
//     }
// }
    unordered_map<string ,string> mp;
    for(int i=0;i<m;i++){
        string s1,s2;
        cin>>s1>>s2;
        mp[s1]=s2;
    }
    for(int i=0;i<n;i++){
        string s3;
        cin>>s3;
        if(s3.size()>mp[s3].size()){
            cout<<mp[s3]<<" ";
        }
        else {
            cout<<s3<<" ";
        }
    }
}