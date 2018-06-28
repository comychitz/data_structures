#ifndef _BINARY_SEARCH_TREE_H_
#define _BINARY_SEARCH_TREE_H_

#include <iostream>

class BinaryTree
{
  public:
    class Node
    {
      public:
        Node() : left(NULL), right(NULL), value(0) { }

        Node(int val) : left(NULL), right(NULL), value(val) { }

        virtual ~Node() { }

        Node *left, *right;
        int value;
    };

    Node *root;

    BinaryTree() : root(NULL) { }

    virtual ~BinaryTree() { }

    /**
     * insert a node to the tree
     */
    virtual void insert(int value) = 0;
 
    /**
     * delete a node from the tree
     */
    virtual void remove(Node *node) = 0;

    /**
     * print the binary tree breadth-first
     * NOTE: unbalanced trees will not be completely printed breadth-first 
     */
    virtual void print() const
    {
      if(root == NULL)
      {
        std::cout << "(empty)";
      }
      else 
      {
        std::cout << root->value << " ";
        print_(root);
      }
      std::cout << std::endl << std::endl;
    }

  private:
    void print_(Node *node) const
    {
      if(node->left != NULL)
      {
        std::cout << node->left->value << " ";
      }
      
      if(node->right != NULL)
      {
        std::cout << node->right->value << " ";
      }

      if(node->left != NULL)
      {
        print_(node->left);
      }

      if(node->right != NULL)
      {
        print_(node->right);
      }
    }
};

#endif
