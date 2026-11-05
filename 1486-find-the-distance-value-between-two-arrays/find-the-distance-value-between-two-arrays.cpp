class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());

        int c = 0;

        for(int i = 0; i < arr1.size(); i++) {
            int t = arr1[i];

            int st = 0;
            int end = arr2.size() - 1;
            bool found = false;

            while(st <= end) {
                int mid = st + (end - st) / 2;

                if(abs(arr2[mid] - t) <= d) {
                    found = true;
                    break;
                }
                else if(arr2[mid] < t) {
                    st = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }

            if(!found) {
                c++;
            }
        }

        return c;
    }
};