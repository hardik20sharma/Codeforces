#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, n;
    cin >> t;
    while(t--)
    {
        string num;
        cin >> n >> num;

        if(n == 1)
        {
            if ((num[0] - '0') % 2 == 0)
                cout << "2\n";
            else
                cout << "1\n";
            continue;
        }

        int cnt_even_digit_even_pos = 0, cnt_odd_digit_odd_pos = 0;
        int cnt_even_digit_odd_pos = 0, cnt_odd_digit_even_pos = 0;

        for(int i=0; i<n; i++)
        {
            if ( (num[i] - '0') % 2 == 0 && (i+1) % 2 == 0 )
                cnt_even_digit_even_pos++;

            else if ( (num[i] - '0') % 2 == 1 && (i+1) % 2 == 1 )
                cnt_odd_digit_odd_pos++;
            
            else if ( (num[i] - '0') % 2 == 0 && (i+1) % 2 == 1 )
                cnt_even_digit_odd_pos++;
            
            else if ( (num[i] - '0') % 2 == 1 && (i+1) % 2 == 0 )
                cnt_odd_digit_even_pos++;
        }

        if( cnt_odd_digit_even_pos + cnt_even_digit_odd_pos < cnt_even_digit_even_pos + cnt_odd_digit_odd_pos)
            cout << "2\n";
        else
            cout << "1\n";
    }
}