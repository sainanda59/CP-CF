#include <bits/stdc++.h>
using namespace std;
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
#define ll long long int
#define pll pair<ll, ll>
#define pss pair<string, string>
#define vpll vector<pll>
#define vll vector<ll>
#define vvll vector<vll>
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define alla(a,n) a, a + n
#define Size(v) (int)v.size()
#define Sort(v) sort(all(v))
#define Reverse(v) reverse(all(v))
#define Sorta(a,n) sort(alla(a,n))
#define Reversea(a,n) reverse(alla(a,n))
#define Permute next_permutation
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


ll gcd(ll x, ll y){if(y>x){return gcd(y,x);}if(y==0){return x;}return gcd(y,x%y);}
bool prime(ll x){for(ll i=2;i<=sqrt(x);i++){if(x%i==0){return 0;}}return 1;}
ll fact(ll n){if(n==0){return 1;}return n*fact(n-1);}
bool powerOf2(ll n){if(n==0){return 0;} return (ceil(log2(n))== floor(log2(n)));}


void solve(){
ll r1,r2,c1,c2,d1,d2;cin>>r1>>r2>>c1>>c2>>d1>>d2;
ll x = min3(r1,d1,c1);
fo(i,1,x){
    ll r1c1 = i;
    ll r1c2 = r1-r1c1;
    ll r2c2 = c2-r1c2;
    ll r2c1 = r2-r2c2;
    if(r1c1>9 || r1c2>9 || r2c1>9 || r2c2>9)
    continue;
    if(r1c2>=c2 || r1c2>=d2)
    continue;
    else if(r2c2>=d1 || r2c2>=r2 || r2c2+r1c1!=d1)
    continue;
    else if(r2c1>=c1 || r2c1>=d2 || r2c1+r1c2!=d2)
    continue;
    else{
        if(r1c1!=r1c2 && r1c2!=r2c2 && r2c2!=r2c1 && r2c1!=r1c1 && r1c1!=r2c2 && r1c2 != r2c1){
        cout<<r1c1<<" "<<r1c2<<endl;
        cout<<r2c1<<" "<<r2c2<<endl;
        return;
        }
        
    }
}
cout<<-1<<endl;
}


int32_t main(){
fast
ll t=1;
//cin>>t;
while(t--)
solve();
return 0;
}