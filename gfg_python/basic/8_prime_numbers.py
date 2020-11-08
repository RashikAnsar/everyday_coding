# print all the prime numbers in an interval
def prime_numbers(start, end):
    primes = []
    for i in range(start, end):
        if i >= 2:
            for j in range(2, i):
                if(i % j == 0):
                    break
            else:
                primes.append(i)
    return primes


if __name__ == "__main__":
    start = int(input("Enter starting number: "))
    stop = int(input("Enter ending number: "))
    print(
        f"Prime numbers between {start} and {stop} are\n{prime_numbers(start, stop)}"
    )
