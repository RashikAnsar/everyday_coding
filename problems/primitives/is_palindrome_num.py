# Check If A Number Is A Palindrome
# A palindrome is a sequence that reads the same forwards and backward.
# Given an integer as input, write a function that tests if it is a palindrome.

# Note: A negative number cannot be a palindrome due to the `-` sign
# Constraints: You may not cast the number to a string

# #######################################
# Example 1:
# Input: 9232
# Output: False
# #######################################
# Example 2:
# Input: 12321
# Output: True
# #######################################
# Example 3:
# Input: 1
# Output: True
# #######################################
# Example 4:
# Input: -121
# Output: False
# #######################################


class Solution:
    def is_palindrome(self, x):
        """Checks wheter the given number is palindrome or not

        Args:
            x (integer): number

        Returns:
            bool: if x is palindrome return True else return False
        """
        result = 0
        temp = x
        while x > 0:
            result = result * 10 + (x % 10)
            x //= 10

        return (temp == result)

    def test_is_palindrome(self):
        assert self.is_palindrome(9232) == False
        assert self.is_palindrome(12321) == True
        assert self.is_palindrome(1) == True
        assert self.is_palindrome(-121) == False


if __name__ == "__main__":
    Solution().test_is_palindrome()
