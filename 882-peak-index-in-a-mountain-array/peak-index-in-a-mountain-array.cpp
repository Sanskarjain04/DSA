class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
    int high = arr.size()-1;

    while(low<=high){
        int mid = low + (high-low)/2;

        bool leftOk = (mid == 0) || (arr[mid] > arr[mid - 1]);
        bool rightOk = (mid == arr.size() - 1) || (arr[mid] > arr[mid + 1]);

        if (leftOk && rightOk)
        {
            return mid;
        }
        else if(mid < arr.size() - 1 && arr[mid]<arr[mid+1]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
    }
};