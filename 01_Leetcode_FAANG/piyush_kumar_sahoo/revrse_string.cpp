class Solution {
public:
    vector<char> reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
        return s;
    }
};