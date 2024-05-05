class Solution:
    def isPalindrome(self, x: int) -> bool:
        
        # negatives are not palindromes
        if x < 0:
            return False

        reversedNum = 0
        y = x

        while y:
            # multiply the reversed number by 10 and add the last digit of y
            reversedNum = reversedNum * 10 + y % 10
            # remove the last digit from y
            y //= 10

        # returns true if palindrome otherwise false
        return reversedNum == x