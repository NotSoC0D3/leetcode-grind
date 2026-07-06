class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        int minum = INT_MAX;

        while(l <= r){
            int mid = (r + l)/2;
            minum = min(minum, nums[mid]);
            if(nums[mid] < nums[r]) r = mid - 1;

            else if(nums[mid] > nums[r]) l = mid + 1;

            else r--;
            
        }

        return minum;
    }
};