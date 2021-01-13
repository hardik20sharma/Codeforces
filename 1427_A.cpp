#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n; cin >> t;
    while(t--)
    {
        cin >> n; 
        vector<int> a(n);

        int sum = 0;
        for(int i=0; i<n; sum += a[i], i++)
            cin >> a[i];

        if(sum == 0)
            { cout << "NO\n"; continue; }
        else
            if(0 < sum)
                sort(a.begin(), a.end(), greater<int>());
            else
                sort(a.begin(), a.end());
        
        cout << "YES\n";
        for(int i=0; i<n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
}