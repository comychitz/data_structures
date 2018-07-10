# data structures
Practice coding data structures in C++.

## linked lists
Linked lists is a data structure to typically keep an unordered sequence of
items. Insertion & deletion are *constant* time. All other operations are linear
with respect to the number of elements.

When solving problems with linked lists, there are several tricks to keep in
mind:
    * recursion
    * copying a node into another
    * two runners; one fast, one slow
        * can be used to find loops in corrupted linked lists

## trees
Trees are ubiquitous in computer science/programming. They are a powerful data
structure for keeping track of ordered data and searching said data. There many
types of trees, each offering specific benefits. Some commonly used trees are:
    * binary search trees
    * heaps
    * B-Trees & T-Trees
    * Binary Tries

Trees are used for the purposes of:
    * manipulating hierarchical data
    * storing data to allow for efficent searching
    * manipulating sorted lists of data

Some example applications where trees are used:
    * Storing data in structures like maps and sets
    * File system hierarchy
    * Databases
    * Router-tables

Common operations performed on trees:
* enumerating the tree or a section of it
* searching
* add/deleting an item to a specific position
* pruning: removing a section
* grafting: adding a section
* find the root for any node
* finding the lowest common ancestor of two nodes

### tree properties
* balanced vs unbalanced
* sorted vs unsorted

### tree traversal
* depth-first search
* breadth-first search
    * typical solution involves a queue

## References
* [Tree (Data Structure) - Wikipedia](https://en.wikipedia.org/wiki/Tree_(data_structure))
* [Know Thy Complexities!](http://bigocheatsheet.com)
* [Data Structures Reference - InterviewCake](https://www.interviewcake.com/data-structures-reference)
