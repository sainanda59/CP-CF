class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        for(auto i:jewels){
            mp[i]++;
        }
        int j=0;
        for(auto i:stones){
            if(mp.find(i)!=mp.end()){
                j++;
            }
        }
        return j;
    }
};