//
// Created by Yasser Cristancho on 9/11/2021.
//

#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
    head = NULL;
}

template<class T>
bool LinkedList<T>::isEmpty() {
    return head == NULL ? true : false;
}

template<class T>
void LinkedList<T>::addNodeFirst(T info) {
    Node<T> *nodeNew = new Node<T>(info);
    if (isEmpty()) {
        head = nodeNew;
    } else {
        nodeNew->next = head;
        head = nodeNew;
    }
}

template<class T>
std::vector<T> LinkedList<T>::getLinkedList() {
    Node<T> *aux = head;
    std::vector<T> out;

    while (aux != NULL) {
        out.push_back(aux->info);
        aux = aux->next;
    }

    return out;
}


template<class T>
void LinkedList<T>::addNodeLast( T info ) {
    Node<T> *nodeNew = new Node<T>(info);
    if (isEmpty()) {
        head = nodeNew;
    } else {
        Node<T>* aux = head;
        while( aux->next != NULL ){
            aux = aux->next;
        }
        aux->next = nodeNew;
    }
}

template<class T>
Node<T> *LinkedList<T>::findNode(std::string id) {
    Node<T> *aux = head;
    while (aux != NULL) {
        if ((id.compare(aux->info.getId()) == 0)) return aux;
        aux = aux->next;
    }

    return NULL;
}

template<class T>
T *LinkedList<T>::findInfo(std::string id) {
    Node<T> *aux = head;
    while (aux != NULL) {
        if ((id.compare(aux->info.getId()) == 0)) return &aux->info;
        aux = aux->next;
    }

    return NULL;
}

template<class T>
LinkedList<T>::~LinkedList() {
    Node<T>* aux;
    while( head != NULL ){
        aux = head;
        head = head->next;
        delete(aux);
    }
}



