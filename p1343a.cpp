#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
long long mod = 1000000007;

void fun(ll tt)
{
    int n; cin>>n;
    for(long x = 1;x<INT_MAX;x++)
    {
        for(int k = 1;k<INT_MAX;k++)
        {
            if(x*(1<<k)==n+x)
            {
                cout<<x<<endl;
                return;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        fun(tt);
    }
    return 0;
}
