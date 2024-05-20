class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        result = int(dividend/divisor)
        if result > (pow(2, 31) - 1):
            return pow(2, 31) - 1
        else:
            return result
        