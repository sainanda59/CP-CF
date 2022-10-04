class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> v = nums;
        for (auto i : nums)
            v.push_back(i);
        return v;
    }
};