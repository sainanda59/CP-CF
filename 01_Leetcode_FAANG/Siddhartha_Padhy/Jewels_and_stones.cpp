class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> memo;
        for(char str: stones)
        {
            memo[str]++;
        }
        
        int ans=0;
        
        for(auto m: jewels)
        {
            ans += memo[m];
        }
        return ans;
    }
};
