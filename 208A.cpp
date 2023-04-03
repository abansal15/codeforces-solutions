// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s2;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i = i + 2;
            cout<<" ";
            continue;
        }
        else
        {   
            cout<<s[i];
            
        }
        
    }
   // cout << s2 << '\n';
}