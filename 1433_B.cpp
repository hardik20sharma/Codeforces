#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n; cin >> t;
    while(t--)
    {
        cin >> n;

        bool a[n];


        for(int i=0; i<n; i++)
            cin >> a[i];

        int first_true = -1, last_true = n;

        for(int i=0; i<=n; i++)
            if(a[i])
            {
                first_true = i;
                break;
            }

        for(int i=n-1; i>=0; i--)
            if(a[i])
            {
                last_true = i;
                break;
            }

        int res = 0;
        for(int i=first_true; i<last_true; i++)
            if(!a[i])
                res++;
        
        cout << res << "\n";
    }
}