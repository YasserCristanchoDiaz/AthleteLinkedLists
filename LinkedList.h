
#ifndef ATHLETELINKEDLISTS_LINKEDLIST_H
#define ATHLETELINKEDLISTS_LINKEDLIST_H

#include "Node.h"
#include <vector>
#include <string>

template <class T>
class LinkedList {
public:

    LinkedList();

    bool isEmpty();

    void addNodeFirst( T );

    void addNodeLast( T );

    Node<T> *findNode(std::string);

    T *findInfo(std::string);

    std::vector<T> getLinkedList();

    virtual ~LinkedList();

private:
    Node<T>* head;
};

#endif //ATHLETELINKEDLISTS_LINKEDLIST_H
