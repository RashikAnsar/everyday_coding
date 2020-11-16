# Create a dictionary
d = {}
print(type(d))

lang = {
    'name': 'Python',
    'version': 3.9,
    'is_oop': True,
}

print(lang)
print(type(lang))

# Access name from lang dictionary
print(lang['name'])

print(lang.get('name'))

# change value of version in lang

lang['version'] = "3.9.1"


# get all the items as tuples
x = lang.items()

# get the keys of a dict
keys = lang.keys()
# get the values of a dict
values = lang.values()

# add new item to list
lang['is_beta'] = False

# remove item from the dict
lang.popitem()
# remove specific item from dict
lang.pop('is_oop')

# remove all items
lang.clear()

# delete dict itself
del lang
