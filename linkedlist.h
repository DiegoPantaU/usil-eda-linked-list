#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

// #include
// #include <vector>
// using namespace std;
class Node {
  int data;
  Node *next;
  
  friend class LinkedList;
  
}
template <typename T>
class LinkedList
{
  private:
  size_t m_top;
  vector<T> m_stack; 
  int t_head;
  int t_data;
  Node *head;
  // members here
  public:
    LinkedList();
    //contructor 
    LinkedList::LinkedList() { 
      t_head = NULL;
    }

    int T front(); // Retorna el elemento al comienzo
    T back(); // Retorna el elemento al final
    void push_front(T); // Agrega un elemento al comienzo 
    void push_back(T); // Agrega un elemento al final
    void pop_front(); // Remueve el elemento al comienzo
    void pop_back(); // Remueve el elemento al final
    T operator[](int); // Retorna el elemento en la posición indicada
    bool empty(); // Retorna si la lista está vacía o no
    int size(); // Retorna el tamaño de la lista 
    void clear(); // Elimina todos los elementos de la lista
    void sort(); // Ordena la lista
    void reverse(); // Revierte la lista
};

// Comments #2
template <typename T>
int LinkedList<T>::front(T &elem) // Retorna el elemento al comienzo
{
  return t_head->t_data;
}

// Comments #3
template <typename T>
T LinkedList<T>::back()
{

}

template <typename T>
void LinkedList<T>::push_front(T) // Agrega un elemento al comienzo 
{
  Node *pnt = new Node;
  pnt ->data=dt;
  pnt ->next=head;
  
  head =pnt;
}  

void LinkedList<T>::pop_front() // Remueve el elemento al comienzo
{
  if(m_top>0)
    return m_stack[--m_top];
  throw out_of_range("This stack is empty."); 
}else{
  Node *pnt = head->next;
  deleate head;
  
  head = pnt;
}

void LinkedList<T>::pop_back() // Remueve el elemento al final
{
  while (head != NULL)
    removeFront();
}

bool LinkedList<T>::empty() // Retorna si la lista está vacía o no
{
  Node *pnt = head;
  if (pnt == NULL) {
    cout << "Lista vacia";
}
  
  
  
  #endif
