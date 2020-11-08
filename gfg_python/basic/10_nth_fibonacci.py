def nth_fibonacci(n):
    lst = [0] * (n+1)
    lst[1] = 1

    for i in range(2, n+1):
        lst[i] = lst[i-1] + lst[i-2]
    return lst[n - 1]


if __name__ == "__main__":
    n = int(input("Enter n to genterate nth Fibonacci number: "))
    print(f"{n}th Fibonacci number is {nth_fibonacci(n)}")
