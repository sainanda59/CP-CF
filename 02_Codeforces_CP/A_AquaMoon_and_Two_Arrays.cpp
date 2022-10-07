#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi (3.141592653589)
#define MAX 2147483648
#define MIN -2147483647
#define mod 1000000007
#define ff first
#define ss second
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a,b,c) max(c, max(a,b))
#define max4(a,b,c,d) max(d, max(c, max(a,b)))
#define fo(i,s,n) for(ll i=s;i<n;i++)
#define rfo(i, n) for(ll i=n;i>=0;i--)
#define arr(a,n) long long int *a = new long long int[n]
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


ll gcd(ll x, ll y){if(y>x){return gcd(y,x);}if(y==0){return x;}return gcd(y,x%y);}
bool prime(ll x){for(ll i=2;i<=sqrt(x);i++){if(x%i==0){return 0;}}return 1;}
ll fact(ll n){if(n==0){return 1;}return n*fact(n-1);}
bool powerOf2(ll n){if(n==0){return 0;} return (ceil(log2(n))== floor(log2(n)));}


void solve(){
ll n;cin>>n;
arr(a,n);
arr(b,n);
fo(i,0,n)
cin>>a[i];
ll plus=0,minus=0;
fo(i,0,n){
    cin>>b[i];
    if(b[i]>=a[i])
    plus+=(b[i]-a[i]);
    else
    minus+=(a[i]-b[i]);
}
if(plus!=minus){
    cout<<-1<<endl;
    return;
}
else{
    vector<pair<int,int>> ans;
    fo(i,0,n){
        if(a[i]==b[i])
        continue;
        if(a[i]>b[i]){
        fo(j,i+1,n){
            if(a[j]>=b[j])
            continue;
            if(a[j]<b[j]){
                ll x = min(a[i]-b[i],b[j]-a[j]);
                a[i]-=x;
                a[j]+=x;
                fo(l,0,x)
                ans.push_back(std::make_pair(i+1,j+1));
                if(a[i]==b[i])
                break;
            }
        }
    }
    else{
       fo(j,i+1,n){
            if(a[j]<=b[j])
            continue;
            if(a[j]>b[j]){
                ll x = min(b[i]-a[i],a[j]-b[j]);
                a[i]+=x;
                a[j]-=x;
                fo(l,0,x)
                ans.push_back(std::make_pair(j+1,i+1));
                if(a[i]==b[i])
                break;
            }
        } 
    }

}
cout<<ans.size()<<endl;
fo(i,0,ans.size())
cout<<ans[i].first<<" "<<ans[i].second<<endl;

}
}

int32_t main(){
fast
ll t=1;
cin>>t;
while(t--)
solve();
return 0;
}