def sum_of_array(arr):
    """Return the sum of all the elements in list/array
    without using built-in `sum(arr)` sum function

    Args:
        arr (list): sums all the elements in list
    """
    result = 0
    for i in arr:
        result += i
    return result


if __name__ == "__main__":
    arr = [2, 3, 5, 7, 9]
    print(f"Sum of {arr} is {sum_of_array(arr)}")
