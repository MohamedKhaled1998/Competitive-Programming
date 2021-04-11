#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,k;
    cin>>n>>k;
    cout<<2 + 3 * n - 2 + min(k - 1, n - k);
}