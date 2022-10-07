#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while(q--){
        int n;
        cin>>n;
        string t;
        cin >> t;
        string ans = "";
        int i = 0, j = 2;
        while(j<n){
            if(t[j]=='0'){
                if(j<n && t[j+1]=='0'){
                    ans += ('a' + (t[i] - '0') - 1);
                    i++;
                    j++;
                    continue;
                }
                string temp = "";
                temp += t[i];
                temp += t[i + 1];
                int val = stoi(temp);
                ans += ('a' + val - 1);
                i += 3;
                j += 3;
            }else{
                ans += ('a' + (t[i] - '0') - 1);
                i++;
                j++;
            }
        }
        while(i<n){
            ans += ('a' + (t[i] - '0') - 1);
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}