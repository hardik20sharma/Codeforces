#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, k, time_left = 240, cnt_problems = 0;
    cin >> n >> k;
    
    time_left -= k;
    if(time_left < 5)
        { cout << "0\n"; return 0; }

    for(int i=1; cnt_problems < n && 5*i <= time_left; cnt_problems++, i++)
        time_left -= 5*i;

    cout << cnt_problems;
}