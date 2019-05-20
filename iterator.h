//* * * * * * * * * * * * * * * * * * * * * * * * * *
//
// program: iterator.h
//
// Name : William Schneider
// Email : ws828417@ohio.edu
//
// Description: bidrectional external iterator
//
// Date : Mar/20/2019
//
// * * * * * * * * * * * * * * * * * * * * * * * * * *

//bidrectional external iterator
//pages 330 and 338 for the functions

#ifndef DNODE_ITERATOR_H
#define DNODE_ITERATOR_H
#include"dnode.h"
//#include<iostream>
template<class T> class dlist;
template<class T>
class dnode_iterator{
  public:
      friend class dlist<T>; //forward decleration
      
      dnode_iterator(dnode<T> *init = NULL){ 
        ptr = init;
      }

      bool operator !=(const dnode_iterator& other){
        return (ptr!=other.ptr);
      }

      bool operator ==(const dnode_iterator& other){
        return (ptr == other.ptr);
      }

      T operator *(){
        return (ptr->data());
      }

      //forward incrementing
      dnode_iterator operator ++(){//prefix 
        ptr = ptr->next();
        return *this;
      }
      dnode_iterator operator ++(int){//postfix
        dnode_iterator original(*this);
        ptr = ptr->next();
        return original;
      }
      
      //backward incrementing
      dnode_iterator operator --(){//prefix
        ptr = ptr->previous();
        return *this;
      }
      dnode_iterator operator --(int){//postfix
        dnode_iterator original(*this);
        ptr = ptr->previous();
        return original;
      }

  private:
      dnode<T> *ptr;
};
#endif 