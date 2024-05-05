class Solution:
    def romanToInt(self, s: str) -> int:
        ref = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        integerValue = 0
        prevValue = 0

        for char in reversed(s):
            value = ref[char]
            
            # if the current value is less than the previous value, subtract it from the integer value, otherwise add it to the integer value
            if value < prevValue:
                integerValue -= value
            else:
                integerValue += value
            
            # Update the previous value to the current value
            prevValue = value

        return integerValue