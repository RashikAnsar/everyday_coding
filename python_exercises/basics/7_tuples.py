x = (2)  # It is not of type tuple
print(type(x))

# Create a tuple
x = tuple()
print(type(x))

x = ()
print(type(x))

x = 2,
print(type(x))

x = (2,)
print(type(x))

x = (2, 3)
print(type(x))

# access elements from tuple indexing (+ve and -ve)
# access first and last elements from tuple
tpl = (1, 2, 3, 4, 5, 6, 7, 8, 9)
print(f"{tpl[0]} and {tpl[-1]}")


# slicing [start(INCLUDED): stop(EXCLUDED): step]
print(tpl[::-1])  # reverse the tuple
print(tpl[:5])  # select upto index 4
print(tpl[3:7])  # select from index 3 to index 6

tpl1 = ("Hi", "Hello", "Hi", "Bye", "Oh", "Good")
# print how many times "Hi" is in tpl1
print(tpl1.count("Hi"))

# print index of Hello in tpl1
print(tpl1.index("Hi"))  # Index method returns first occurence index

# Check out how to iterate through tuple
# Why tuples are immutable
