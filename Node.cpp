#include "Node.h"

Node::Node(int data)
{
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
}

Node::~Node()
{
    if (this->next != nullptr)
    {
        delete this->next;
        this->next = nullptr;
    }
}