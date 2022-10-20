class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0,j=1;
        while(i!=arr.size())
        {
            if(arr[i]!=j) 
                k--;
            else
                i++;
            if(!k)
                break;
            j++;
        }
        if(!k)
            return j;
        else
            return j+k-1;
    }
};
