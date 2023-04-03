// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    long long n = s.size();
    if (s[0] == '9')
    {
        cout << 9;
    }
    else if(s[0] - '0' >= 5 && s[0]!='9'){
        cout << '9' - s[0];
    }
    else if(s[0]-'0'<5){
        cout<<s[0];
    }

    for (int i = 1; i < n; i++)
        {
            if (s[i] - '0' >= 5)
            {
                cout << '9' - s[i];
                // s[i]='9'-s[i];
                // count++;
                // cout<<s[i];
            }
            else
                cout << s[i];
        }
    }
    //  cout<<s<<" ";
    // cout<<count;

