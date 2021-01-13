#include<bits/stdc++.h>
using namespace std;

bool func(vector<int> a, vector<int> b, int x)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    for(int i=0; i<a.size(); i++)
        if(a[i]+b[i] > x)
            return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n, x; cin >> t;
    while(t--)
    {
        cin >> n >> x;

        vector<int> a(n), b(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        for(int j=0; j<n; j++)
            cin >> b[j];
        
        (func(a, b, x)) ? cout << "Yes\n" : cout << "No\n";
    }
}