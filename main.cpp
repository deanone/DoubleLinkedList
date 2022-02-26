#include "DoubleLinkedList.h"
#include <string>
#include <iostream>

/* Driver application for the custom single linked list implementation. */
int main(int argc, char* argv[])
{

    int startVal = 1;
    DoubleLinkedList* list = new DoubleLinkedList(startVal);

    for (int i = 2; i <= 4; i++)
    {
        list->append(i);
    }

    list->printLeftToRight();

    list->reverse();

    list->printLeftToRight();

    delete list;

    return 0;
}