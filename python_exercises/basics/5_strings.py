txt = "python is a programming Language"
print(txt)

# Make first letter of first word capital
print(txt.capitalize())

# convert every words first letter to capital
print(txt.title())

# convert to uppercase
print(txt.upper())

# convert to lowercase
print(txt.lower())

# print number of times 'a' occurs in string txt
print(txt.count('a'))

# check whether string starts with age or not
print(txt.startswith('age'))

# check whether string ends with age or not
print(txt.endswith('age'))

# check string contains program if exists then print the starting index of given word
print(txt.find('program'))

txt2 = "        Hello World        "
print(txt2)

# remove white spaces aroud the string
print(txt2.strip())

# remove white spaces on left side of string
print(txt2.lstrip())

# remove white spaces on right side of string
print(txt2.rstrip())

# Remove dashes in phone number
phone = '9876-543-210'
print(phone.replace('-', ''))

# split the phone number at -
print(phone.split('-'))

# Checkout `zfill()`, `isalnum()`, `isnumeric` etc.
