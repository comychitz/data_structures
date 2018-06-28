#include "BinaryTree.h"

class BinaryTreeUnsorted : public BinaryTree
{
  public:
    BinaryTreeUnsorted() 
    {
    }

    virtual ~BinaryTreeUnsorted() 
    { 
    }

    void insert(int value)
    {
      insert_(value, root); 
    }

    void remove(Node *node)
    {
      //
      // TODO
      //
    }

  private:
    void insert_(int value, Node * &start)
    {
      if(start == NULL)
      {
        start = new Node(value);
      }
      else if(value < start->value)
      {
        if(start->left == NULL)
        {
          start->left = new Node(value);
        }
        else 
        {
          insert_(value, start->left);
        }
      }
      else 
      {
        if(start->right == NULL)
        {
          start->right= new Node(value);
        }
        else
        {
          insert_(value, start->right);
        }
      }
    }
};
