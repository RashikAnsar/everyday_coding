# find largest element in an array
def max_el(arr):
    """Returns the max element from the given array
    without using the built-in `max(arr)` max function

    Args:
        arr (list): list of numbers
    """
    result = arr[0]

    for i in range(1, len(arr)):
        if arr[i] > result:
            result = arr[i]

    return result


if __name__ == "__main__":
    arr = [98, 54, 66, 157, 24, 15, 75]
    print(f"Max element in {arr} is {max_el(arr)}")
