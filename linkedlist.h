#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <iostream>
using namespace std;
#include "type.h"

const T num=10;
template <typename T>
class LinkedList
{
  private:
    size_t m_front, m_rear;
    T arr[num]; 

  public:
  //imprimir LinkedList
    LinkedList(){
      m_front = -1;
      m_rear = -1;
      for (T i=0; i<size(arr); i++){
        arr[i]=0;
      }
    }

    ~LinkedList(){}
    void front(); // Retorna el elemento al comienzo
    T back(); // Retorna el elemento al final
    void push_front(T); // Agrega un elemento al comienzo 
    void push_back(T); // Agrega un elemento al final
    void pop_front(); // Remueve el elemento al comienzo
    void pop_back(); // Remueve el elemento al final
    T operator[](int); // Retorna el elemento en la posición indicada
    bool isEmpty(); // Retorna si la lista está vacía o no
    int size(); // Retorna el tamaño de la lista 
    void clear(); // Elimina todos los elementos de la lista
    void sort(); // Ordena la lista
    void reverse(); // Revierte la lista
};


template <typename T>
bool LinkedList<T>::isEmpty()
  {
    if (m_front == -1 && m_rear == -1)
        return true;
    else
        return false;
  }

//añadir
template <typename T>
void LinkedList<T>::add(T &elem) 
  {
    if ((m_rear+1)%num==m_front)
    {
    throw out_of_range("La lista está llena");
    }
    else if (m_rear==num-1)
    {throw out_of_range("La lista está llena");}
    else if (isEmpty())
    {
      m_rear = 0; 
      m_front = 0; 
      arr[m_rear]=elem; }
    else
    {m_rear = (m_rear+1)%size(arr);
      arr[m_rear]=elem;}
  }
  
//elimnar
template <typename T>
T LinkedList<T>::remove()
  {
    if(isEmpty())
    {throw out_of_range("La Lista está vacia");
      return 0;}
    else if (m_front == m_rear) 
    {
      m_front = m_rear = -1;
      return -1;
    }
    else 
    { arr[m_front]=0; 
      m_front = (m_front+1)%num; 
      return 0;}
  }

  //Primer elemento
  Template <typename T>
  void LinkedList<T>::front(T &elem)
  {
   cout<<"El primer elemento de la Lista es: "<<endl;
     if (isEmpty()){
       cout<<"La lista está vacia"<<endl;}
     else {
       cout << m_front;
     }
  }

  // ultimo elemento 
  Template <typename T>
  void LinkedList<T>::front(T &elem)
  {
   cout<<"El utlimo elemento de la Lista es: "<<endl;
     if (isEmpty()){
       cout<<"La lista está vacia"<<endl;}
     else {
       cout << m_rear;
     }
  }
#endif
