#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    int key;
} MyHashSet;

MyHashSet *myHashSetCreate(void)
{
    int i;
    MyHashSet *hash_set;

    if (!(hash_set = (MyHashSet *)malloc(sizeof(MyHashSet) * 1000001)))
        return (NULL);
    for (i = 0; i < 10; i++)
        hash_set[i].key = -1;
    return(hash_set);
}

void myHashSetAdd(MyHashSet *obj, int key)
{
    obj[key].key = key; //usually we use a hash function here.
}

void myHashSetRemove(MyHashSet *obj, int key)
{
    obj[key].key = -1;
}

bool myHashSetContains(MyHashSet *obj, int key)
{
    if (obj[key].key == key)
        return (true);
    return (false);
}

void myHashSetFree(MyHashSet *obj)
{
    free(obj);
    obj = NULL;
}

int main(void)
{
    MyHashSet *hash_set;
    hash_set = myHashSetCreate();
    myHashSetAdd(hash_set, 1);
    myHashSetAdd(hash_set, 5);
    myHashSetAdd(hash_set, 4);
    myHashSetFree(hash_set);
    return (0);
}
