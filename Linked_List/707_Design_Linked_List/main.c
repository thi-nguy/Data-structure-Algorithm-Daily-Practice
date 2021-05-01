#include <stdlib.h>
#include <stddef.h>

typedef struct MyLinkedList_s
{
    int data;
    struct MyLinkedList_s *next;
    
} MyLinkedList;

/** Initialize your data structure here. */

MyLinkedList* myLinkedListCreate() 
{
    MyLinkedList *node;

    node = (MyLinkedList *)malloc(sizeof(MyLinkedList));
    if (!node)
        return (NULL);
    node->data = NULL;
    node->next = NULL;
    return (node);
}

/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
void myLinkedListAddAtHead(MyLinkedList* obj, int val) 
{
    MyLinkedList *new_head;

    new_head = (MyLinkedList *)malloc(sizeof(MyLinkedList));
    if (!new_head)
        return ;
    if (new_head->data == NULL)
    {
        new_head->data = val;
        return ;
    }
    new_head->data = val;
    new_head->next = obj->next;
    obj->next = new_head; //Gap van de o day
}

/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
int myLinkedListGet(MyLinkedList* obj, int index) 
{
    int i;

    i = 0;
    while (i < index)
    {
        if (obj->next != NULL)
            i++;
        return (-1);
    }
    return (obj->data);
}
/** Append a node of value val to the last element of the linked list. */
void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
  
}

/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
  
}

/** Delete the index-th node in the linked list, if the index is valid. */
void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
  
}

void myLinkedListFree(MyLinkedList* obj) {
    
}

int main(void)
{
    MyLinkedList *head;

    head = myLinkedListCreate();
    myLinkedListAddAtHead(&head, 10);
    myLinkedListAddAtHead(&head, 9);
    myLinkedListAddAtHead(&head, 8);
    return (0);
}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
*/