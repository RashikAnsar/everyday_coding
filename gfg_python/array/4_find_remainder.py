# Find remainder of array multiplication divided by n
def find_remainder(arr, n):
    """Returns the remainder of array multiplication divided by n

    Args:
        arr (list): list of numbers
        n (integer): divisor
    """
    # to avoid overflow(2^64) use distributive law
    result = 1
    for i in arr:
        result = (result * (i % n)) % n

    return result % n


if __name__ == "__main__":
    arr = [100, 10, 5, 25, 35, 14]
    n = 11
    print(
        f"Remainder of (product of {arr} divided by {n}) is {find_remainder(arr, n)}")
