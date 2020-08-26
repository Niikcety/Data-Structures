//
// Created by nikkie on 1.08.20 г..
//

#ifndef TASK1_CIRCULARSINGLELINKEDLIST_H
#define TASK1_CIRCULARSINGLELINKEDLIST_H

#include <string>

class Node{
public:
    std::string word;
    Node *next;
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList();
    ~CircularLinkedList();

    void addNode(std::string word);
    //void traverse();

};


#endif //TASK1_CIRCULARSINGLELINKEDLIST_H
