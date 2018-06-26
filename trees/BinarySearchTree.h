#ifndef _BINARY_SEARCH_TREE_H_
#define _BINARY_SEARCH_TREE_H_

#include <iostream>

class BinarySearchTree
{
  public:
    class Node
    {
      public:
        Node() : left(NULL), right(NULL), value(0) { }

        ~Node() { }

        Node *left, right;
        int value;
    };

    Node *root;

    BinarySearchTree() : root(NULL) { }

    BinarySearchTree(Node *r) : root(r) { }

    ~BinarySearchTree() { }

    /**
     * add a node to the tree
     */
    void add(Node *node)
    {
      if(root == NULL)
      {
        root = node;
        return;
      }

    }

    /**
     * print the binary tree
     */
    void print() const;
 
    /**
     * delete a node from thre tree
     */
    void remove(Node *node);

    /**
     * search for a node in the tree, return true if found, false otherwise
     */
    bool search(const Node *node) const;
};

#endif
