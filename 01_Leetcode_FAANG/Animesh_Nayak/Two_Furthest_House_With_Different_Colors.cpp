class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int max=0;
        for(int i=0;i<colors.size();i++)
        {
            for(int j=i+1;j<colors.size();j++)
            {
                if(colors[i]!=colors[j])
                {
                    if(max<j-i)
                        max=j-i;
                }
            }
        }
        return max;
    }
};
