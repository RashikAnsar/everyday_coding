# create a list
lst = []
print(type(lst))

lst = list()
print(type(lst))

lst = [1, 2, 3, 4, 5, 6, 7]
print(type(lst))

# Number of times an element 4 is in list
lst1 = [1, 1, 4, 2, 2, 8, 9, 2, 3, 7, 4, 6, 4, 8]
print(lst1.count(4))

# Add elements from lst2 to lst1
lst1 = [1, 2, 3, 4]
lst2 = [5, 6]
lst1.extend(lst2)  # lst1 = lst1 + lst2
print(lst1)
print(lst2)

# Add element 7 to the end of lst2
lst2.append(7)
print(lst2)

# Add element 4 to the beginning (at specified position) of lst2
lst2.insert(0, 4)
print(lst2)

# reverse a list
lst2.reverse()
print(lst2)

# Remove the last element from list
lst2.pop()
print(lst2)

# Remove the specified index `1` element from list
lst2.pop(1)
print(lst2)

# Clear the lst2
lst2.clear()  # del lst2[:]
print(lst2)

# List items are accessed using index
# create list from lists using slicing [start: stop: step]
# `remove`, `index` acts on first item from the list whose value is equal to x
# `sort` sorts the values of list inplace
# Checkout `copy` == `lst[:]` method for shallow copying
