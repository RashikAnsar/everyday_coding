# Reverse Bits

# Given an input integer `x`, return the integer value of input's bits reversed.
# You will only be reversing the "significant portion" of the binary representation (ignoring leading zeros).

# Constraints: `x` will always be strictly greater than or equal to 0

########################################################
# Example 1:
# Input: 1
# Output: 1
# Explanation: Under 8 bits 1 can be represented as 00000001.
# If we only reverse the significant protion of this we yield 00000001 which is 1 in binary.

########################################################
# Example 2:
# Input: 10
# Output: 5
# Explanation: 10 is 1010 under base 2, 00001010 under 8 bits (notice how leading 0's do not add value).
# The reverse of 1010 is 0101, yielding 00000101 which is 5.

#########################################################
# Example 3:
# Input: 9090
# Output: 4209
# Explanation:
# 9090
# ---------
# Under base 10: 9090
# Under base 2: 10001110000010 (we just need 14 bits to represent this)
# Under base 2 (fit into 16 bits aka 2 bytes): 0010001110000010
# Under base 2 reversed: 01000001110001 (still 14 bits)
# Under base 2 (fit into 16 bits): 0001000001110001
##########################################################

class Solution:
    def reverse_bits(self, x):
        output = 0
        while x != 0:
            output = output << 1
            if x & 1 == 1:
                output = output | 1
            x = x >> 1
        return output

    def test_reverse_bits(self):
        assert self.reverse_bits(1) == 1
        assert self.reverse_bits(10) == 5
        assert self.reverse_bits(9090) == 4209


if __name__ == "__main__":
    Solution().test_reverse_bits()
