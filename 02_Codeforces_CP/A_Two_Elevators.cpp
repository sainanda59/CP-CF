#include <bits/stdc++.h>
using namespace std;
#define ll long long;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int f = abs(a - 1);
        int s = (abs(c - b) + abs(c - 1));
        if(f<s){
            cout << 1 << endl;
        }else if(s<f){
            cout << 2 << endl;
        }else{
            cout << 3 << endl;
        }
    }
    return 0;
}