# check if a given number is Fibonacci number
# A number is Fibonacci if and only if one or both of (5*n^2 + 4) or (5*n^2 – 4) is a perfect square
from math import sqrt


def is_perfect_square(num):
    sq = int(sqrt(num))
    return sq * sq == num


def is_fibonacci(num):
    return is_perfect_square(5*num*num + 4) or is_perfect_square(5 * num*num - 4)


if __name__ == "__main__":
    num = int(input("Enter a number: "))
    print(f"is {num} a Fibonacci number: {is_fibonacci(num)}")
