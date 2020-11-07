# Given two numbers num1 and num2.
# The task is to write a Python program to find the addition of these two numbers.

def sum_two(num1, num2):
    return num1 + num2


if __name__ == "__main__":
    num1 = float(input("Enter num 1: "))
    num2 = float(input("Enrer num 2: "))

    print(f"Sum of {num1} and {num2} = {sum_two(num1, num2)}")
