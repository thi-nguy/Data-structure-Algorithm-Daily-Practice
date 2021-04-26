#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct MyHashSet_s
{
    int key;
    struct MyHashSet_s *next;
} MyHashSet;

 MyHashSet *myHashSetCreate(void)
{
    int i;
    MyHashSet *hash_set;

    if (!(hash_set = (MyHashSet *)malloc(sizeof(MyHashSet) * 101)))
        return (NULL);
    for (i = 0; i < 100; i++)
        hash_set[i].key = -1;
    return(hash_set);
}

int hash(int key)
{
    int hash_value;

    hash_value = key % 100;
    return(hash_value);
}


void myHashSetAdd(MyHashSet *obj, int key)
{
    int index;

    index = hash(key);

    obj[index].key = key; //usually we use a hash function here.
}
