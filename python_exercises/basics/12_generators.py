# implement a generator which works similar to built-in enum function
def my_enum(items):
    idx = 0
    for item in items:
        yield (idx, item)
        idx += 1


print(list(my_enum(['Zero', 'One', 'Two', 'Three'])))


# Yield odd numbers from 1 to n
def odd(n):
    for i in range(n+1):
        if i % 2 != 0:
            yield i
        i += 1


print(list(odd(10)))


# Yield Fibonacci sequence upto n
def fibonacci(n):
    myArray = []
    for i in range(n):
        if i is 0 or i is 1:
            myArray.append(i)
            yield i
        else:
            x = myArray[i-2] + myArray[i-1]
            myArray.append(x)
            yield x


print(list(fibonacci(10)))
