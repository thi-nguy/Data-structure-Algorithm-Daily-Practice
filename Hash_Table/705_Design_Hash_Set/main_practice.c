#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define TABLE_SIZE 10
 
typedef struct 
{
    char name[250];
    int age;
    //and other stuff.
} person;

person *hash_table[TABLE_SIZE];

unsigned int hash_function(char *name)
{
    int hash_value;
    int length;
    int i;

    hash_value = 0;
    length = strlen(name);
    for (i = 0; i < length; i++)
    {
        hash_value += name[i];
        hash_value = (hash_value * name[i]) % 10;
    }
    return (hash_value);
}

void init_hash_table(void)
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hash_table[i] = NULL;
    }
}

void print_table(void)
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if(hash_table[i] == NULL)
            printf("\t%i\t---\n", i);
        else
            printf("\t%i\t%s\n", i, hash_table[i]->name);
    }
}

bool hash_table_insert(person *p)
{
    if (p == NULL)
        return (false);
    int index = hash_function(p->name);
    if (hash_table[index] != NULL)
        return (false); //to get colision later
    hash_table[index] = p;
    return (true);
}

person *hash_table_lookup(char *name)
{
    int index = hash_function(name);
    if (hash_table[index] != NULL && strcmp(hash_table[index]->name, name) == 0)
        return (hash_table[index]);
    return (NULL);
}

person *hash_table_delete(char *name)
{
    int index;
    person *tmp;

    index = hash_function(name);
    if (hash_table[index] != NULL && strcmp(hash_table[index]->name, name) == 0)
    {
        tmp = hash_table[index];
        hash_table[index] = NULL;
        return (tmp);
    } 
    return (NULL);

}

int main(void)
{
    init_hash_table();

    person user1 = {.name = "Ron", .age = 25};
    person user2 = {.name = "Harry", .age = 35};
    person user3 = {.name = "Freddy", .age = 20};
    person user4 = {.name = "Snappy", .age = 21};
    person user5 = {.name = "Peppy", .age = 31};
    person user6 = {.name = "Woo", .age = 13};
    person user7 = {.name = "Snowy", .age = 18};
    person user8 = {.name = "Abby", .age = 54};
    person user9 = {.name = "Queen", .age = 73};
    person user10 = {.name = "Thierry", .age = 66};
    hash_table_insert(&user1);
    hash_table_insert(&user2);
    hash_table_insert(&user3);
    hash_table_insert(&user4);
    hash_table_insert(&user5);
    hash_table_insert(&user6);
    hash_table_insert(&user7);
    hash_table_insert(&user8);
    hash_table_insert(&user9);
    hash_table_insert(&user10);
    print_table();

    person *tmp = hash_table_lookup("Ron");
    if (tmp == NULL)
        printf("Not found!\n");
    else
        printf("%s is in Hash Table\n", tmp->name);

    return (0);
}
