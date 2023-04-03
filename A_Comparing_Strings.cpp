// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int count=0,count1=0;
    int arr[130]={0};
    int arr1[130]={0};
    if(s1.size()!=s2.size()){
        cout<<"NO";
    }
    else {
        for(int i=0;i<s1.size();i++){
            arr[s1[i]]++;
            arr1[s2[i]]++;
            if(s1[i]!=s2[i]) count1++;
        }
        for(int i=0;i<130;i++){
            if(arr[i]!=arr1[i]){
                count++;
            }
        }
        if(count!=0){
            cout<<"NO";
        }
        // if(count==0){
        //     cout<<"YES";
        // }
        else if(count==0 && count1==2){
            cout<<"YES";
        }
        else cout<<"NO";
    }
}