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

### binary search trees
* balanced binary search trees are efficient for performing operations because
    the time taken to perform an operations (ex. search) is directly
    proportional to the height of the tree.
* if a binary tree isn't balanced, and keys are added to the tree in sorted
    order, the tree will effectively become a linked list, with a height of n.
* self-balancing binary search trees:
    * AVL tree
    * B-tree
    * Red-black tree

## heap
A heap is a special-purpose tree structure that satisfies the heap property:
    *if P is a parent of C, then the value of P must be greater or equal to (in
    a max heap) than the value of C.*

A heap can be implemented using a tree as its underlying strucutre, but more
commonly implemnted as an array since pointers are not required between
elements. In a binary heap that is implemented using an array the children of a
node can be calculated using `2n+1` and `2n+2`.

Heaps are commonly used to implemented priority queues.

### insertion
When adding a node to a heap, append to the end of the heap first, then
*sift-up* until the heap property is satisfied again. 
To *sift-up* simply compare the current node with its parent, if the heap
property is not satisfied, then swap the nodes. Repeat until property is
satisfied. Insertion time complexity is `O(log(n))`.

### deletion of root
A common operation is to pop the top of the heap, thus potentially causing the
heap property to become unsatisfied. To become a heap again, the last node is
placed at the top of the tree and sifted down until no longer needed. Deletion
time complexity is `O(log(n))`.

## graphs
A graph is mathematical structure used to model pairwise relations between
objects.  Graphs are a set of vertices and edges, where edges connect two
vertices together, typically carrying a weight. 

Operations:
* adjacent
* neighbors
* add/remove vertex/edge
* get edge/vertex value

Representations:
* adjacency list
    * slow to remove vertices and edges, because it needs to find all vertices
        or edges
* adjacency matric
    * slow to add or remove vertices, because matrix must be resized/copied
* Incidence matrix
    * slow to add or remove vertices and edges because matrics must be
        resized/copied
*Adjacency lists are generally preferred because they efficiently represent
sparse graphs. An adjacency matrix is preferred if the graph is dense, that is
the number of edges |E | is close to the number of vertices squared, |V |2, or
if one must be able to quickly look up if there is an edge connecting two
vertices*

Properties of graphs:
* directed or undirected
* cyclic or acyclic graph

Classes of graphs:
* regular graph
* complete graph
* bipartite graph
* connected graph
* cycle graph
* tree

Problems that graphs data structures are used:
* enumeration
* graph coloring
* route problems
* network flow
* visibility problems
* covering problems

### problems
* traveling salesman problem
* dijkstra's shortest path 

## References
* [Tree (Data Structure) - Wikipedia](https://en.wikipedia.org/wiki/Tree_(data_structure))
* [Know Thy Complexities!](http://bigocheatsheet.com)
* [Data Structures Reference - InterviewCake](https://www.interviewcake.com/data-structures-reference)
