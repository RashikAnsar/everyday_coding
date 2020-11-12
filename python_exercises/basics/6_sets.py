languages = {'c', 'java', 'python'}
print(languages)

# Add another language `typescript` to the languages set
languages.add('typescript')
print(languages)

# Add more than one language at a time to languages set
languages.update(['javascript', 'dart', 'go', 'rust'])
print(languages)

# remove a language 'dart' from languages set
languages.discard('dart')
print(languages)

# remove all the elements from languages set
languages.clear()
print(languages)

set1 = {1, 2, 3, 4, 5, 6, 7}
set2 = {5, 6, 7, 8, 9, 10, 11}

# Set operation [UNION]
x = set1 | set2  # x = set1.union(set2)
print(x)

# Set operation [INTERSECTION]
x = set1 & set2  # x = set1.intersection(set2)
print(x)

# Set operation [DIFFERENCE]
x = set1 - set2  # x = set1.difference(set2)
print(x)

x = set2 - set1  # x = set2.difference(set1)
print(x)

# Set operation [SYMMETRIC DIFFERENCE = (A union B) - (A intersection B)]
x = set1 ^ set2  # x = set1.symmetric_difference(set2)
print(x)

# Set operation [IS SUBSET]
x = set1.issubset({1, 2, 3})
print(x)

# Set operation [IS SUPERSET]
x = set1.issuperset({1, 2, 3})
print(x)

# Checkout difference between `remove`, `discard` and `pop` to remove an element
# Some methods have `_update` in name they will update the set.

# Frozen-sets are nothing but sets but they are immutable like tuples.
