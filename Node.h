
#ifndef ATHLETELINKEDLISTS_NODE_H
#define ATHLETELINKEDLISTS_NODE_H

#include <cstdlib>

template <class T> class LinkedList;

template <class T>
class Node {

    friend class LinkedList<T>;

public:

    Node(T info) : info(info) {
        next == NULL;
    }

    virtual ~Node() {

    }

private:
    Node<T>* next;
    T info;
};


#endif //ATHLETELINKEDLISTS_NODE_H
