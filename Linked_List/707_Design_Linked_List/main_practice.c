#include <stddef.h>
#include <stdlib.h>

// ! Option 3: Comply with function prototype

typedef struct Node_s
{
    int data;
    struct Node_s *next;
} Node;

typedef struct MyLinkedList_s
{
    Node *head;
} MyLinkedList;

MyLinkedList* create() 
{
    MyLinkedList *linked_list;

    linked_list = (MyLinkedList *)malloc(sizeof(MyLinkedList));
    if (!linked_list)
        return (NULL);
    return (linked_list);
}

void add_at_head(MyLinkedList *obj, int val) 
{
    Node *tmp;

    tmp = (Node *)malloc(sizeof(Node));
    if (!tmp)
        return ;
    tmp->data = val;
    tmp->next = obj->head;
    obj->head = tmp;
}

int main(void)
{
    MyLinkedList *my_list;

    my_list = create();
    add_at_head(my_list, 10);
    add_at_head(my_list, 9);
    add_at_head(my_list, 8);
    return (0);
}

// #include <stddef.h>
// #include <stdlib.h>

// !Option 1: Return void, using pointer to pointer **obj

// typedef struct MyLinkedList_s
// {
//     int data;
//     struct MyLinkedList_s *next;
// } MyLinkedList;

// MyLinkedList* create() 
// {
//     MyLinkedList *node;

//     node = (MyLinkedList *)malloc(sizeof(MyLinkedList));
//     if (!node)
//         return (NULL);
//     node = NULL;
//     return (node);
// }

// void add_at_head(MyLinkedList **obj, int val) 
// {
//     MyLinkedList *tmp;

//     tmp = (MyLinkedList *)malloc(sizeof(MyLinkedList));
//     if (!tmp)
//         return ;
//     tmp->data = val;
//     tmp->next = *obj;
//     *obj = tmp;
// }

// int main(void)
// {
//     MyLinkedList *head;

//     head = create();
//     add_at_head(&head, 10);
//     add_at_head(&head, 9);
//     add_at_head(&head, 8);
//     return (0);
// }
// ! Option 2: Return MyLinkedList*, not using pointer to pointer
// #include <stddef.h>
// #include <stdlib.h>

// typedef struct MyLinkedList_s
// {
//     int data;
//     struct MyLinkedList_s *next;
    
// } MyLinkedList;

// MyLinkedList* create() 
// {
//     MyLinkedList *node;

//     node = (MyLinkedList *)malloc(sizeof(MyLinkedList));
//     if (!node)
//         return (NULL);
//     node->data = NULL;
//     node->next = NULL;
//     return (node);
// }

// MyLinkedList *add_at_head(MyLinkedList *obj, int val) 
// {
//     MyLinkedList *tmp;

//     tmp = (MyLinkedList *)malloc(sizeof(MyLinkedList));
//     if (!tmp)
//         return ;
//     tmp->data = val;
//     tmp->next = obj;
//     obj = tmp;
//     return (obj);
// }

// int main(void)
// {
//     MyLinkedList *head;

//     head = create();
//     head = add_at_head(head, 10);
//     head = add_at_head(head, 9);
//     head = add_at_head(head, 8);
//     return (0);
// }