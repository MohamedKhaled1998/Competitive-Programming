#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; ++i)
    {
        int x,y;
        cin>>x>>y;
        a[i] = {x,y};
    }
    int k;
    cin>>k;
    int ans = 0;
    for(int i = 0; i < n; ++i)
    {
        //cout<<a[i].first<<' '<<a[i].second<<'\n';
        if(a[i].second < k)
        {
            ans++;
        }
    }
    cout<<n - ans<<'\n';
}