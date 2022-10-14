class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> m;
        for(int i=0;i<jewels.size();i++)
        {
            m[jewels[i]]++;
        }
        int count=0;
        for(int i=0;i<stones.size();i++)
        {
            if(m[stones[i]]>0)
            {
                count++;
            }
        }
        
        return count;
    }
};
