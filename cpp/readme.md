# Containers in STL

- [REFER_1](https://www.cplusplus.com/reference/stl/)
- [REFER_2 (Containers)](cs.stmarys.ca/~porter/csc/ref/stl/containers_summary.html)
- [REFER_2 (STL)](https://cs.stmarys.ca/~porter/csc/ref/stl/)

## Sequence containers

- **arrays :**
  - collection of elements of same data type
- **vector :**
  - Provides linear, contiguous storage, with fast inserts at the "back" end only.
  - This class is often referred to as a "better array" that we should all now use in place of arrays.
  - Like a great deal of free advice, this too should be followed with caution.
- **deque :**
  - Provides linear, non-contiguous storage, with fast inserts at both ends.
- **list :**
  - Provides linear, doubly-linked storage, with fast inserts anywhere.
- **forward_list :**
  - Provides linear, singly-linked list, that allow constant time insert and erase operations anywhere within the sequence.

## Container Adaptors

- **stack :**
  - Adapts the deque container to provide strict last-in, first-out (LIFO) behavior.
- **queue :**
  - Adapts the deque container to provide strict first-in, first-out (FIFO) behavior.
- **priority_queue :**
  - Adapts the vector container to maintain items in a sorted order.

## Associative Containers

- **map :**
  - Provides a collection of 1-to-1 mappings, i.e. a collection of key/value "pairs" (pair objects) in which the first element of such a pair is a key and the second element of the pair is the value corresponding to that key, and the pair objects are maintained in sorted key order.
  - In a map the keys must be unique.
- **multimap :**
  - Like a map, except that pairs with duplicate keys are permitted.
- **set :**
  - Provides a set of items which must have keys (or themselves be keys, in the simplest cases), with fast associative lookup.
  - In a set the item keys must be unique, but (somewhat counter intuitively for a set) the item keys are ordered.
- **multiset :**
  - Like a set, except that items with duplicate keys are permitted.

## Unordered Associative Containers

- **unordered_set**
- **unordered_multiset**
- **unordered_map**
- **unordered_multimap**

# Iterators in STL

> Iterators as an entity that help us to access the data within a container with certain restrictions.

- **Input Iterator :**
  - A entity through which you can read data from container and move ahead.
- **Output Iterator :**
  - A entity through which you can write data into the container and move ahead.
- **Forward Iterator :**
  - Iterator with functionalities of input and output iterator in single direction.
- **Bidirectional Iterators :**
  - Forward iterator that can move in both directions
- **Random Access Iterators :**
  - It is an iterator that can read/write in both directions and also can take jumps.
