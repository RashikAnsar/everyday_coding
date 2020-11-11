# Primitive data types
# `type()` is a function which returns the type of data stored in the variable/Literal passed
# Integers
x = 1
print(type(x))
# Floating point numbers
y = 1.2
print(type(y))
# Complex number
z = 3 + 4j
print(type(z))

# String
a = "Hello World"
print(type(a))

# Boolean
b = True
print(type(b))

# How to check whether a variable has particular data type
# ex: does var `x` has floating point number or not
print(isinstance(x, float))  # one way
print(type(x) == float)

# Type conversion can be done using the required type as func
# int(2.5)
# float(5)
# str(685)
