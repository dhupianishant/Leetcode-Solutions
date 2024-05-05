class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if n <= 0:
            # negative or zero numbers are not power of 2
            return False
        else:
            # bitwise AND operation of n and n-1 will always be zero 
            return n & (n-1) == 0  