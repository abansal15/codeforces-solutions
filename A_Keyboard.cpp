// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    //  cout<<c;
    string s;
    cin >> s;
    string s1 = "qwertyuiop";
    string s2 = "asdfghjkl;";
    string s3 = "zxcvbnm,./";
    int z = s1.size();
   // cout << z << '\n';
    //  cout<<s<<'\n';
    int n = s.size();
    if (c == 'R')
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < z; j++)
            {
                if (s[i]==s1[j]){
                    cout<<s1[j-1];
                }
                if(s[i]==s2[j] && s[i]!=s2[0]){
                    cout<<s2[j-1];
                }
                if(s[i]==s2[0]){
                    cout<<"p";
                }
                if(s[i]==s3[j] && s[i]!=s3[0]){
                    cout<<s3[j-1];
                }
                if(s[i]==s3[0]){
                    cout<<";";
                }
            }
        }
    }
    if(c=='L'){
         for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < z; j++)
            {
                if(s[i]==s1[9]){
                    cout<<"a";
                }
                if (s[i]==s1[j] && s[i]!=s1[9]){
                    cout<<s1[j+1];
                }
                if(s[i]==s2[j] && s[i]!=s2[9]){
                    cout<<s2[j+1];
                }
                if(s[i]==s2[9]){
                    cout<<"z";
                }
                if(s[i]==s3[j]){
                    cout<<s3[j+1];
                }
                // if(s[i]==s3[0]){
                //     cout<<";";
                // }
            }
        }
    }
}