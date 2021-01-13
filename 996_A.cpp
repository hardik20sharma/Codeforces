#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, cnt = 0; cin >> n;
    
    while(n)
    {
        while(n >= 100) { n -= 100; cnt++; }
        while(n >= 20)  { n -= 20; cnt++; }
        while(n >= 10)  { n -= 10; cnt++; }
        while(n >= 5)   { n -= 5; cnt++; }
        while(n >= 1)   { n -= 1; cnt++; }
    }

    cout << cnt << "\n";
}