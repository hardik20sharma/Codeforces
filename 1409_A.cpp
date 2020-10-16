// https://codeforces.com/problemset/problem/1409/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;

        int max_temp = max(a, b), min_temp = min(a, b), step = 0;

        if(10 <= max_temp - min_temp)
        {
            step += (max_temp - min_temp) / 10;
            max_temp -= (step * 10);
        }

        if(max_temp != min_temp)
            step++;

        cout << step << "\n";
    }
}