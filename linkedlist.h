#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include<iostream>
#include <vector>
using namespace std;

template <typename T>
class LinkedList
{
  private:
    size_t m_top, m_rear; //posicion 
    vector<T> m_linkedlist;    // cantidad
  // members here
  public:

    LinkedList() :m_top(0) {}

    // Retorna el tamaño de la lista 
    size_t size() { return m_top;  }


    T front(); // Retorna el elemento al comienzo
    T back(); // Retorna el elemento al final
    void push_front(T); // Agrega un elemento al comienzo 
    void push_back(T); // Agrega un elemento al final
    void pop_front(); // Remueve el elemento al comienzo
    void pop_back(); // Remueve el elemento al final
    T operator[](int); // Retorna el elemento en la posición indicada
    bool empty(); // Retorna si la lista está vacía o no
    void clear(); // Elimina todos los elementos de la lista
    void sort(); // Ordena la lista
    void reverse(); // Revierte la lista
};

 // Retorna el elemento al comienzo
template <typename T>
T LinkedList<T>::front()
{
  if(m_top>0)
  return m_linkedlist[--m_top];
  throw out_of_range("This linkedlist is empty."); 
}

// Retorna el elemento al final
template <typename T>
T LinkedList<T>::back()
{
  if(m_top>0)
  return m_linkedlist[m_top(1)];
  throw out_of_range("This linkedlist is empty."); 
}


// Agrega un elemento al comienzo 
template <typename T>
void LinkedList<T>::push_front(T)
{
  m_linkedlist.insert(m_linkedlist.end(), elem);
  m_top++; 
}


// Retorna si la lista está vacía o no
bool LinkedList<T>::empty()
{
  if(size() == 0){
  cout << "La lista esta vacia"; }
  else {cout << "La lista esta llena"}
}


// Revierte la lista
template <typename T>
void LinkedList<T>::reverse()
{
  if(m_top>0)
    return m_linkedlist[--m_top];
  throw out_of_range("This stack is empty."); 
}


#endif

