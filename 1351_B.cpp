#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, a1, b1, a2, b2; cin >> t;
    while(t--)
    {
        cin >> a1 >> b1 >> a2 >> b2;

        int big_1 = max(a1, b1), small_1 = min(a1, b1);
        int big_2 = max(a2, b2), small_2 = min(a2, b2);

        if(big_1 == big_2 && small_1 + small_2 == big_1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}