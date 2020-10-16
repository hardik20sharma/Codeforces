#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, a, b, c;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        
        if(c % b == 0 && a == c/b)
            cout << a*(c/b - 1)  <<  " -1\n";

        else if(c <= a)
            cout << "-1 1\n";
        
        else
            cout << __gcd(a, c) << " " << __gcd(a, c) + 1 << "\n";
    }
}