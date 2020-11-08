# Program to left rotate arr[] of size n by d

def _left_rotate_by_one(arr):
    el = arr[0]
    n = len(arr)
    for i in range(n-1):
        arr[i] = arr[i+1]
    arr[n-1] = el


def left_rotate(arr, step):
    """rotate the array to left by step
    without using rotate method of deque from collections
    `dequeObj.rotate(step)`

    Args:
        arr (list): List of elements
        step (integer): Step size by how many elements to rotate
    """
    for _ in range(step):
        _left_rotate_by_one(arr)

    print(*arr, sep=", ")


if __name__ == '__main__':
    arr = [1, 2, 3, 4, 5, 6, 7]
    d = 3
    left_rotate(arr, d)
