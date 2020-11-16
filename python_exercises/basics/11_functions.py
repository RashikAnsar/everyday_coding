from types import BuiltinFunctionType

########################################
######     Built-in Functions    #######
########################################

# `isinstance`: it is used to check instance of variable/literal
x = ['Python', 3.9]
print(isinstance(x, list))
print(isinstance(x[0], str))
print(isinstance(x[1], float))

# `eval`: to evaluate expression from string
x = 3
print(eval('x * 2 + 5 '))

# `min`, `max`
a = [1, 8, 4, 2, 0, 6]
print(min(a))
print(max(a))

# check all elements of iterable object return logical True
all([1, 2, 3, 4, 5])  # True
all((1, 2, 3, 4, 5))  # True

all([0, 1])  # False

# check any elements of iterable object return logical True
any([0, "", 2])  # True
any([0, ""])  # False

# get the ascii value of a character
print(ord('a'))

# absolute value
print(abs(8))
print(abs(-8))

# `bin`: converts and returns the binary equivalent string of a given integer
print(bin(8))

# chr: return ascii character at given value
print(chr(97))

# CHECK DOCUMENTATION FOR MORE BUILT-IN functions

########################################
######      Custom Functions     #######
########################################


# function to sum first n natural numbers
def sum_of_n(n):
    return (n * (n + 1))/2


# Factorial function
def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n-1)
