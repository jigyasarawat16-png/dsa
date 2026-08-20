class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int b = m + n - 1;  
        int b1 = m - 1;     
        int b2 = n - 1;     

        while (b2 >= 0) {
            if (b1 >= 0 && nums1[b1] >= nums2[b2]) {
                nums1[b] = nums1[b1];
                b1--;
            } 
            else {
                nums1[b] = nums2[b2];
                b2--;
            }
            b--;
        }
    }
};