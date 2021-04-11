#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> m;
    for(int i = 1; i < 10; ++i)
    {
        int x; cin>>x;
        m[i + '0'] = x;
    }
    for(int i = 0; i < n; ++i)
    {
        if(m[s[i]] + '0' > s[i])
        {
            int j = i;
            while(j < n && m[s[j]] + '0' >= s[j])
            {
                s[j] = m[s[j]] + '0';
                j++;
            }
            break;
        }
    }
    cout<<s<<'\n';
}