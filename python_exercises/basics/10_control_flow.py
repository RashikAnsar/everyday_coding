#############################################################
#########            IF-ELSE CONDITINALS            #########
#############################################################

# check the given file is of txt type
file_name = "hello.txt"

if file_name.endswith('txt'):
    print("yes it is a text file")
else:
    print("No")


# check if num in nums else add num to nums list
nums = [3, 6, 8, 2, 7]
num = 5
if num in nums:
    print("It is already present")
else:
    nums.append(num)

# check max out of 3 nums
a, b, c = 4, 8, 6
if a >= b and a >= c:
    print(a)
elif b >= c:
    print(b)
else:
    print(c)


#############################################################
#########                    LOOPS                  #########
#############################################################
# print a list of even numbers upto 20 [2,4,6...., 18, 20]
even = []
for i in range(21):
    if i % 2 == 0:
        even.append(i)
print(even)

# Remove duplicates from list without type conversion
lst = [1, 2, 3, 3, 4, 2, 6, 8, 10]
new_lst = []
for i in lst:
    if i not in new_lst:
        new_lst.append(i)
print(new_lst)

# Print first 10 prime numbers seperated by comma (,)
counter = 0
number = 2
prime = []

while counter < 10:
    for i in range(2, number):
        if number % i == 0:
            break
    else:
        prime.append(str(number))
        counter += 1
    number += 1

print(','.join(prime))

# Checkout `continue` and `break` statements
