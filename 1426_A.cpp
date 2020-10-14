#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    short t, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;

        if(n == 1 || n == 2)
            { cout << "1\n"; continue; }

        short floor_low = 3, floor_high = x+2, i=2;

        for( ; ; i++, floor_low = floor_high + 1, floor_high += x)
            if(floor_low <= n && n <= floor_high)
                break;

        cout << i << "\n";
    }
}