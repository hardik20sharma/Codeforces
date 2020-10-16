#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s; cin >> s;
    sort(s.begin(), s.end());
    
    char c = s.back();
    int len = s.size() - s.find(c);
    
    cout <<  s.substr(s.find(c), len) << "\n";
}