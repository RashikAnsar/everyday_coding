# program to interchange element at position 1 (pos1) with element at position 2(pos2)
# POS 1 = index 0
def swap_list(lst, pos1, pos2):
    if pos1 < 0 or pos2 < 0:
        print(f"Invalid position")
        return

    lst[pos1 - 1], lst[pos2 - 1] = lst[pos2 - 1], lst[pos1 - 1]
    return lst


if __name__ == "__main__":
    lst = [2, 4, 6, 8, 10, 15, 20, 30]
    pos1, pos2 = 1, 6
    print(
        f"Original list: {lst}\nSwap {pos1} & {pos2} elem: {swap_list(lst, pos1, pos2)}")
