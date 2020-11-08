def sum_of_n(n):
    """Sum of first n Natural Numbers

    Args:
        n (integer): upto n Natural Numbers
    """
    return (n * ((n + 1) // 2))


def sq_sum_of_n(n):
    """Sum of squares of first n Natural Numbers

    Args:
        n (integer): upto n Natural Numbers
    """
    return (n * (n + 1) * (2 * n + 1)) // 6


def cube_sum_of_n(n):
    """Sum of cubes of first n Natural Numbers

    Args:
        n (integer): upto n Natural Numbers
    """
    return (n * ((n + 1) // 2)) ** 2


if __name__ == "__main__":
    n = int(input("Enter number n: "))
    print(f"Sum of first {n} Natural Numbers: {sum_of_n(n)}")
    print(f"Sum of squares of first {n} Natural Numbers: {sq_sum_of_n(n)}")
    print(f"Sum of cubes of first {n} Natural Numbers: {cube_sum_of_n(n)}")
