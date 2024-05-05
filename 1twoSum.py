class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)-1):
            for j in range(i+1, len(nums)):
                
                # if the sum of the ith and jth numbers equals the target then return the indices othrwise continue
                if nums[i]+nums[j] == target:           
                    return [i, j]
        
        # return an empty list if no such pair exists
        return []