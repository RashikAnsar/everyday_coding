# print a variable using f-string
lang = "Python"
print(f"Hello from {lang}")

# print a variable with out using f-string
version = 3.8
print("Python version:", version)

# print upto n=2 decimal places of float using f-string
pi = 3.1415926535
print(f"Pi: {pi:.2f}")

# print a line full of '='  like 50
print("=" * 50)

# Refer the keyword args of print function like `end` and `sep`
# by default sep=" " we can override it
print('combinig', 'strings', 'using', 'seperator', sep="*")