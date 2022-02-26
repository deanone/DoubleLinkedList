#include "DoubleLinkedList.h"
#include "Node.h"
#include <iostream>

DoubleLinkedList::DoubleLinkedList(int data)
{
    this->head = new Node(data);
}

DoubleLinkedList::~DoubleLinkedList()
{
    if (this->head != nullptr)
    {
        delete this->head;
        this->head = nullptr;
    }
}

void DoubleLinkedList::append(int data)
{
    if (head != nullptr) // if list not empty
    {
        Node* current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        Node* node = new Node(data);
        node->prev = current;
        current->next = node;
        return;
    }
    return;
}

void DoubleLinkedList::reverse()
{
    if (this->head != nullptr)
    {
        Node* current = this->head;
        while (current->next != nullptr)
        {
            Node* temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }
        Node* temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        this->head = current;
        return;
    }
    return;
}

void DoubleLinkedList::printLeftToRight()
{
    if (head != nullptr)
    {   
        if (head->next == nullptr)
        {
            std::cout << head->data;
            std::cout << "\n";
            return;
        }

        Node* current = head;
        while (current->next != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << current->data << "\n";
        return; 
    }
    return;
}