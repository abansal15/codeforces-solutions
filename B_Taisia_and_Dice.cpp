// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int dice, sum, rems;
        cin >> dice >> sum >> rems;
        cout << sum - rems << " ";
        vector<int> v(dice-1);
        for (int i = 0; i < dice - 1; i++)
        {
            v[i] = 1;
            rems--;
        }
        while (1)
        {
            if (rems == 0)
            {
                break;
            }
            for (int i = 0; i < dice - 1; i++)
            {
                if (rems == 0)
                {
                    break;
                }
                v[i]++;
                rems--;
            }
        }
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}