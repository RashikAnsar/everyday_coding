# Given two integers n and k. Find position of the nth multiple of K in the Fibonacci series.

def find_position(k, n):
    f1, f2 = 0, 1
    i = 2
    while i != 0:
        f3 = f1 + f2
        f1 = f2
        f2 = f3
        if f2 % k == 0:
            return n*i
        i += 1
    return None


if __name__ == "__main__":
    k = int(input("Enter a number (k): "))
    n = int(input("Enter a multiple (n): "))
    print(
        f"Position of {n}th multiple of {k} in Fibonacci Seires is {find_position(k, n)}")
