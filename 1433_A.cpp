#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        
        int res = 10 * ( (s[0] - '0') - 1);

        if(s.size() == 1)
            res += 1;
        else if(s.size() == 2)
            res += 3;
        else if(s.size() == 3)
            res += 6;
        else if(s.size() == 4)
            res += 10;
        
        cout << res << "\n";
    }
}

/*
    
    1   11  111     1111    10 * 0
    1   3   6       10

    2   22  222     2222    10 * 1
    11  13  16      20

    3   33  333     3333    10 * 2
    4   44  444     4444    10 * 3
*/