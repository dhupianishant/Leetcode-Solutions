class Solution:
    def percentageLetter(self, s: str, letter: str) -> int:
        countOfLetter = 0
        for i in range(len(s)):
            if s[i] == letter:
                countOfLetter += 1
        return int((countOfLetter/len(s))*100)
        