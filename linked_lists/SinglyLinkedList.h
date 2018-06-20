#ifndef _SINGLY_LINKED_LIST_H_
#define _SINGLY_LINKED_LIST_H_

#include "LinkedList.h"

class SinglyLinkedList : public LinkedList
{
  public:
    SinglyLinkedList() {  }

    ~SinglyLinkedList() {  } 

    /**
     * insert a new node into the list
     */
    void insert(Node *n)
    {
      if(first == NULL)
      {
        first = n;
        first->next = last;
      }
      else 
      {
        last->next = n;
      }
      last = n;
    }

    /**
     * delete a node in the list
     */
    void remove(const Node *n)
    {
      if(first == NULL)
      { // list is empty
        return;
      }
      if(first->value == n->value)
      {
        Node *newFirst = first->next;
        first->next = NULL;
        first = newFirst;
      }
      else 
      {
        Node *cur = first;
        while(cur->next != NULL)
        {
          if(cur->next->value == n->value)
          {
            Node *removing = cur->next;
            cur->next = cur->next->next;
            removing->next = NULL;
            break;
          }
          cur = cur->next;
        }
      }
    }
};

#endif
