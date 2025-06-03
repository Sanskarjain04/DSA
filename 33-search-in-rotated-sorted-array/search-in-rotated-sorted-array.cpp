class Solution {
public:
    int pivotInArray(vector<int>& nums, int n) {
        int low = 0;
        int high = n - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= nums[0]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }

    int BinarySearch(vector<int>& nums, int s, int e, int k) {
        int low = s;
        int high = e;
        int ans = -1;
        int mid = 0;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (nums[mid] == k) {
                return mid;
            } else if (nums[mid] < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = pivotInArray(nums,n);
    if(target>=nums[pivot] && target<=nums[n-1]){
        return BinarySearch(nums,pivot,n,target);
    }
    else {
        return BinarySearch(nums,0,pivot,target);
    }
    }
};