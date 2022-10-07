#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    fastio;
    long int test;
    cin>>test;
    while(test--)
    {
        int n,c, ans=0;
        cin>>n>>c;
        map<int, int> rec;
        for(int i=0; i<n; ++i)
        {
            int x;
            cin>>x;
            rec[x]++;
        }
        for(auto it: rec)
        {
            if(it.second * 1 < c)
                ans += it.second;
            else
                ans += c;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
