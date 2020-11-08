# Check whether the given number is prime or not
def is_prime(num):
    if num <= 1:
        return False

    # 2, 3 are prime
    if num <= 3:
        return True

    # any thing divisible by 2 or 3 are not prime
    if num % 2 == 0 or num % 3 == 0:
        return False

    # using 6k+1 or 6k-1 ``
    i = 5
    while i * i <= num:
        if num % i == 0 or num % (i + 2) == 0:
            return False
        i = i + 6
    return True


if __name__ == "__main__":
    num = int(input("Enter a number: "))
    print(f"is {num} prime: {is_prime(num)}")
