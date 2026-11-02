class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int c=0;
        
        for(int i=1;i<n;i++){
            c+=nums[i]-nums[0];
        }
        return c;
            
        

        
    }
};