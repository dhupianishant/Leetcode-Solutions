class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        
        # sort
        people.sort()
        
        # Initialize the count of boats to 0
        countBoats = 0
        
        # Initialize two pointers, left and right
        left = 0 
        right = len(people) - 1

        while left <= right:
            # If the sum of the weights of the people at the left and right pointers is less 
            # than or equal to the limit incement the left pointer and always decrement the 
            # right pointer
            if people[left] + people[right] <= limit:
                left += 1
            right -= 1
            countBoats += 1
        
        return countBoats