
#include <iostream>
#include <vector>
using namespace std;
//step by step Apply Counting Appraoch 
// 1- iterative the array with maxCount = 0, count = 0;
// 2- increase the count till you got the consecutive ones 1
// 3- checkout the maximum count the max(count,maxicount)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int numsSize = nums.size();
        int MaxConsecutive = 0;
        int currentCount = 0;
        
        for(int index = 0; index < numsSize; index++){
            if(nums[index] == 1){
                currentCount++;
                MaxConsecutive = max(MaxConsecutive,currentCount);
            }else{
                currentCount = 0;
            }
        }
        return MaxConsecutive;
    }
};