class Solution:
    def reverse(self, x: int) -> int:
        
        # cheks the overflow condition on INT
        MAX_INT = pow(2, 31) - 1
        MIN_INT = pow(-2, 31)
        
        negative = x<0
        
        # typecasting to string and reversing the string using array slicing
        string = str(abs(x))
        
        # typecasting the reversed string to integer
        reversedInt = int(string[::-1])

        # checking the overflow condition and negative condition
        return (-reversedInt if negative else reversedInt) if reversedInt < MAX_INT and reversedInt > MIN_INT else 0
        