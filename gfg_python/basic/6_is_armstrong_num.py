# Check given number is an Armstrong number.

def order(num):
    """Returns num of digits in a number
    It can also be done using len(str(num))
    """
    n = 0
    while (num != 0):
        n = n + 1
        num = num // 10
    return n


def is_armstrong_num(num):
    # n = len(str(num))
    n = order(num)

    total = 0
    temp = num

    while temp > 0:
        digit = temp % 10
        # total += digit ** order
        total += pow(digit, n)
        temp //= 10

    return (total == num)


if __name__ == "__main__":
    num = int(input("Enter a num: \t"))
    print(f"Is {num} an Armstrong number :{is_armstrong_num(num)}")
