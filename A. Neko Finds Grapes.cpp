#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i = 0; i < n; ++i)
        cin>>a[i];
    for(int j = 0; j < m; ++j)
        cin>>b[j];
    int even = 0, odd = 0;
    for(int i = 0; i < m; ++i)
    {
        if(b[i] & 1)
            odd++;
        else
            even++;
        
    }
    int ans = 0;
    for(int i = 0; i < n; ++i)
    {
        if(a[i] & 1)
        {
            if(even)
            {
                ans++;
                even--;
            }
        }
        else
        {
            if(odd)
            {
                ans++;
                odd--;
            }
        }
        
    }
    cout<<ans<<'\n';
}