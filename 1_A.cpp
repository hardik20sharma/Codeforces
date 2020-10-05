#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long int n, m, a;
    cin >> n >> m >> a;

    if(n % a)
        n += (a - (n % a) );
    if(m % a)
        m += (a - (m % a) );

    cout << (long long int) (n/a) * (m/a) << "\n";
}