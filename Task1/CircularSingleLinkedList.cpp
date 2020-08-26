//
// Created by nikkie on 1.08.20 г..
//

#include <iostream>
#include <utility>
#include "CircularSingleLinkedList.h"

CircularLinkedList::CircularLinkedList() {
    head = nullptr;
}
/*
void CircularLinkedList::traverse() {
    Node *ptr;
    ptr = head;
    do{
        std::cout << ptr->word << "->";
        ptr = ptr->next;
    }while(ptr != head);
}*/

void CircularLinkedList::addNode(std::string newWord) {
    Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    Node* ptr = head;
    newNode->word = newWord;
    newNode->next = head;
    if (head != nullptr){
        while(ptr->next != head){
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }else{
        newNode->next = newNode;
        head = newNode;
    }

}

CircularLinkedList::~CircularLinkedList() {
    Node* ptr = head;
    while(ptr != head){
        Node* next = ptr->next;
        delete ptr;
        ptr = next;
    }
    head = nullptr;
}

