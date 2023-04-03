// Jai shree ram
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000]={0};
    int arr2[1000]={0};
    string s1,s2,s3;
    int count=0;
    cin>>s1>>s2>>s3;
    if(s1.size()+s2.size()!=s3.size()){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<s1.size();i++){
        arr[s1[i]]++;
    }
    for(int i=0;i<s2.size();i++){
        arr[s2[i]]++;
    }
    for(int i=0;i<s3.size();i++){
        arr2[s3[i]]++;
    }
    for(int i=0;i<1000;i++){
        if(arr[i]!=arr2[i]){
            count++;
            // cout<<i<<" ";
            // cout<<arr[i]<<" "<<arr2[i];
            break;
        }
    }
    if(count!=0) cout<<"NO";
    else cout<<"YES";
}