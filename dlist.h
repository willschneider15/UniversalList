//* * * * * * * * * * * * * * * * * * * * * * * * * *
//
// program: dlist.h
//
// Name : William Schneider
// Email : ws828417@ohio.edu
//
// Description: doubly linked list template header file
//
// Date : Mar/20/2019
//
// * * * * * * * * * * * * * * * * * * * * * * * * * *

//need pointers for head and tail, only private variables
//program incrementally using main1 and uncommenting blocks

#ifndef DLIST_H
#define DLIST_H
#include "dnode.h"
#include "iterator.h"

template <class T>
class dlist{
public:
  //constructor
  dlist();
  
  //big 3
  ~dlist();
   dlist(const dlist<T>& other);
   void operator = (const dlist<T>& other);
  
  //functions
  void rear_insert(T item);
  void front_insert(T item);
  void front_remove();
  void rear_remove();
  void reverse_show();
  void show();
  int size();

  //iterator functions
  typedef dnode_iterator<T> iterator; //taking care of the one liners
  iterator begin(){
    return iterator(head);
  }
  iterator end(){
    return iterator(NULL);
  }
  iterator r_begin(){
    return iterator(tail);
  }
  iterator r_end(){
    return iterator(NULL);
  }
  //implemntation in .template
  void remove(iterator it);
  void insert_before(iterator& cur, T item);
  void insert_after(iterator& cur, T item);

private:
  dnode<T> *head; 
  dnode<T> *tail;
};

#include "dlist.template"
#endif