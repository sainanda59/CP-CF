#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string a[n];
        string b[n];
        string c[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for (int i = 0;i<n;i++){
            cin >> b[i];
        }
        for (int i = 0;i<n;i++){
            cin >> c[i];
        }
        unordered_map<string, vector<int>> mp;
        for (int i = 0; i < n;i++){
            mp[a[i]].push_back(1);
            mp[b[i]].push_back(2);
            mp[c[i]].push_back(3);
        }
        int res[4] = {0};
        for(auto i:mp){
            if(i.second.size()==1){
                res[i.second[0]] += 3;
            }else if(i.second.size()==2){
                res[i.second[0]]++;
                res[i.second[1]]++;
            }
        }
        for (int i = 1; i <= 3;i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}