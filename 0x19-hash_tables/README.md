What is a hash function?
  A hash function is used in hash tables to quickly locate a data records given
  its search key (the headword). Specifically, the hash function is used to map
  the search key to a list; the index gives the place in the hash table where
  the corresponding record should be stored.

  A hash function is a data structure that is used to store information of
  arbitrary size to data of a fixed size. Basically there are two components.
  Key:
  Value:
  We can create a hash table to store information.
  They are associate arrays.
  Looks at a certain key and spit out an index number, and will tell us what
  location in the array to store this number.
  Hash (key) -> index
  OHash (Paul) -> 3
  A has function is often used with a hash table. A hash table is a rapid data
  lookup by detecting duplicated records in a large file.
  What if hash value is already filled with something else?
- Then we can make a linked list(chaining) to store other values.

What makes a good hash function?
- A good hash function is able to narrow the search down to only one or two
  entries.


What is a hash table, how do they work and how to use them?


What is a collision and what are the main ways of dealing with collisions
in the context of a hash table?
- A collision is when a key is already filled with one value  but the
  function gives that same index to someone else.
  The best ways to deal with collisions are:
    linked lists off of each index.



What are the advantages and drawbacks of using hash tables?
- Hash functions accelerate table or database lookup by detecting duplicated
  records in a large file.

What are the most common use cases of hash tables?
collection of information for specific things.