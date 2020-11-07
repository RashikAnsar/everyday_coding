# Program to find factorial of a number
# Factorial of a non-negative integer is multiplication of all integers smaller than or equal to n.
# For example factorial of 6 is 6*5*4*3*2*1 which is 720.

def factorial(num):
    if num < 0:
        return "INVALID NUMBER"
    if num == 1 or num == 0:
        return 1
    # # Using loops
    # result = 1
    # for i in range(num, 1, -1):
    #     result *= i
    # return num * factorial(num - 1)
    return num * factorial(num - 1)


if __name__ == "__main__":
    num = int(input("Enter a number: "))
    print(f"Factorial of {num} is {factorial(num)}")
