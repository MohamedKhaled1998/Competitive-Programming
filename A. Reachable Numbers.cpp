#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long n;
    cin>>n;
    int ans = 1;
    set<int> s;
    do
    {
        ans++;
        s.insert(n);
        n = n + 1;
        while(n % 10 == 0)
    cout<<(int)s.size()<<'\n';
}