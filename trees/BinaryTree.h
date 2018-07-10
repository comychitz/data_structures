#ifndef _BINARY_TREE_H_
#define _BINARY_TREE_H_

#include <iostream>
#include <queue>

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
    typedef std::queue<Node*> NodeQueue;

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
     */
    virtual void print() const
    {
      if(root == NULL)
      {
        std::cout << "(empty)";
        return;
      }

      NodeQueue q;
      std::cout << root->value << " ";
      q.push(root);

      while(!q.empty())
      {
        Node *n = q.front();
        if(n->left != NULL)
        {
          std::cout << n->left->value << " ";
          q.push(n->left);
        }
        if(n->right != NULL)
        {
          std::cout << n->right->value << " ";
          q.push(n->right);
        }
        q.pop();
      }
      std::cout << std::endl << std::endl;
    }
};

#endif
