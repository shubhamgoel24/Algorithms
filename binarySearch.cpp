// Take in 2 arguments.
// 1. The intended vector.
// 2. The required target.
// IF found return the index, ELSE return -1

int binarysearch(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                high = mid-1;
            else
                low++;
        }
        return -1;
}
