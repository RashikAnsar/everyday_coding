# Given a non-negative integer input, return true if input is a power of two. Return false otherwise.
class Solution():
    def power_of_two(self, x):
        return x != 0 and (x & (x - 1)) == 0

    def test_power_of_two(self):
        assert self.power_of_two(4) == True
        assert self.power_of_two(8) == True
        assert self.power_of_two(1024) == True
        assert self.power_of_two(0) == False

if __name__ == "__main__":
    Solution().test_power_of_two()