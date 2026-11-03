class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();int c=0;int m=-1948;
        for(int i=0;i<n;i++){
            m=max(m,nums[i]);


        }
        for(int i=0;i<n;i++){
            c+=m-nums[i];
        }



        return c;
    }
};