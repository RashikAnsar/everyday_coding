# Given two numbers, write a program to find the Maximum of these two numbers.
# Return max number.

def max_of_two(num1, num2):
    if num1 > num2:
        return num1
    elif num1 < num2:
        return num2
    else:
        # num1 == num2
        return num1


if __name__ == "__main__":
    num1 = int(input("Enter num 1: "))
    num2 = int(input("Enrer num 2: "))

    print(f"Max of {num1} and {num2} is {max_of_two(num1, num2)}")
