# Check if given array is Monotonic
def is_monotonic(arr):
    return (all(arr[i] <= arr[i + 1] for i in range(len(arr) - 1)) or
            all(arr[i] >= arr[i + 1] for i in range(len(arr) - 1)))


if __name__ == "__main__":
    arr = [[6, 5, 4, 4], [5, 15, 20, 10]]
    for i in range(len(arr)):
        print(f"is {arr[i]} monotonic: {is_monotonic(arr[i])}")
