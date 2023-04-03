// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    unordered_set<char> s;
    char c;
    for (int i = 0; i < 1000; i++)
    {
        cin >> c;
        s.insert(c);
    }
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        // cout<<*it;
        if (*it != '{' && *it != '}' && *it != ',')
        {
            count++;
        }
    }
    cout << count << '\n';
}