#ifndef DOUBLE_LINKED_LIST
#define DOUBLE_LINKED_LIST

class Node;

class DoubleLinkedList
{
    Node* head;
public:

    /*!
     * Constructor. 
     */
    DoubleLinkedList(int data);

    /*!
     * Destructor. 
     */
    ~DoubleLinkedList();

    /*!
     * Appends a new element at the end of the list. 
     */
    void append(int data);

    /*!
     * Reverses the double linked list in place. 
     */
    void reverse();

    /*!
     * Prints the values of the list from left to right (i.e., from head to end).
     */
    void printLeftToRight();

};


#endif  // DOUBLE_LINKED_LIST