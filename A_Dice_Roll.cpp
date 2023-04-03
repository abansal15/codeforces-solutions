// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
void reduceFraction(int x, int y)
{
    int d;
    d = __gcd(x, y);
 
    x = x / d;
    y = y / d;
 
    cout << x << "/" << y << endl;
}
int main(){
    int r1,r2;
    cin>>r1>>r2;
    int _max=max(r1,r2);
    int c=6-_max+1;
    reduceFraction(c, 6);
}