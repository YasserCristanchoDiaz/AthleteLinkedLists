
#ifndef ATHLETELINKEDLISTS_LINKEDLIST_H
#define ATHLETELINKEDLISTS_LINKEDLIST_H

#include "Node.h"
#include <vector>

template <class T>
class LinkedList {
public:

    LinkedList();

    bool isEmpty();

    void addNodeFirst( T );

    void addNodeLast( T );

    std::vector<T> getLinkedList();

    virtual ~LinkedList();

private:
    Node<T>* head;
};

#endif //ATHLETELINKEDLISTS_LINKEDLIST_H
