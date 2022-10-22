class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0;
        int start=1;
        for(int i=0;i<arr.size();i++)
        {
            while(start<arr[i])
            {
                count++;
                if(count==k)
                    return start;
                start++;
            }
            start++;
        }
        // if the ans is out of the max value of the array
        return arr[arr.size()-1]+k-count;
        
    }
};
