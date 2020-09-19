// https://codeforces.com/problemset/problem/1399/A

#include<bits/stdc++.h>
using namespace std;

bool func(set<int> s)
{
    if( s.size() == 1)
        { return true; }

    set<int>::iterator prev = s.begin(), next = prev;
    
    next++;
    for( ;next != s.end(); next++, prev++)
        if(*next - *prev > 1)
        {
            return false;
        }
    return true;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;       
        set<int> s;
        while(n--)
        {
            int temp; cin >> temp;
            s.insert(temp);
        }
        func(s) ? cout << "YES\n" : cout << "NO\n";
    }
}