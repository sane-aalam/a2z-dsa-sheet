class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        // if your array contain only one element simple return it
        if(n == 1){
            return nums[0];
        }

        // Edgecase - starting Element is single Element
        if(nums[0] != nums[1]){
            return nums[0];
        }

        // Edagescase - ending element is single element
        if(nums[n-1] != nums[n-2]){
            return nums[n-1];
        }

        int start = 1;
        int end = n - 2;
        int mid;

        while(start<=end){
            mid = start + (end-start)/2;
            // 2,3,4 privous Element != current Elment != next Element
            if(nums[mid]!= nums[mid+1] and nums[mid] != nums[mid-1]){
                return nums[mid];
            }
            // how to move left direction and right direction 
            // we can left direction 
            if(mid % 2 == 1 and nums[mid] == nums[mid-1] or
             mid % 2 == 0 and nums[mid] == nums[mid+1]){
                start = mid + 1;
            }else{
                end = mid -1;
            }
        }
        return -1;
    }
};