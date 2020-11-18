#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n, c0, c1, h; cin >> t;
    while(t--)
    {
        string s;
        cin >> n >> c0 >> c1 >> h >> s;

        int res = 0;
        for(int i=0; i<n; i++)
            if(s[i] == '0')
                res += min(c0, c1+h);
            else
                res += min(c1, c0+h);

        cout << res << "\n";
    }
}