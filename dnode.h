//* * * * * * * * * * * * * * * * * * * * * * * * * *
//
// program: dnode.h
//
// Name : William Schneider
// Email : ws828417@ohio.edu
//
// Description: the node class file used for a doubly linked list
//
// Date : Mar/20/2019
//
// * * * * * * * * * * * * * * * * * * * * * * * * * *

//default constructor that uses defualt arguments, pointers to null
#ifndef DNODE_H
#define DNODE_H
#include <iostream>

template <class T>
class dnode{
public:
  dnode(T data, dnode *p = NULL, dnode *n = NULL){ //constructor
    prev = p;
    nxt = n;
    datafield = data;
  }

  void set_next(dnode *n){ //one line functions 
    nxt = n;
  }

  void set_previous(dnode *p){
    prev = p;
  }
   
  void set_data(T data){
    datafield = data;
  }

  dnode* next()const{
    return nxt;
  }

  dnode* previous()const{
    return prev;
  }

  T data()const{
    return datafield;
  }
  
private:
  T datafield;
  dnode *nxt;
  dnode *prev;
};

#endif