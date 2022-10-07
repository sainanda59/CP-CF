class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int rmax=0,lmax=0;
        int j=colors.size()-1;
        for(int i=0;i<colors.size();i++){
            if(colors[i]!=colors[j]){
                lmax=max(lmax,abs(i-j));
            }
        }
        j=0;
        for(int i=colors.size()-1;i>=0;i--){
            if(colors[i]!=colors[j]){
                rmax=max(rmax,abs(i-j));
            }
        }
        return max(lmax,rmax);
    }
};