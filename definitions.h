#ifndef BQASSIGNMENT3_DEFINITIONS_H
#define BQASSIGNMENT3_DEFINITIONS_H

#define MAX_FILENAME    32
#define MAX_NAME        32
#define MAX_ITEMS       10

typedef struct item
{
    char name[MAX_NAME];
    struct item *next;
}Item;
typedef struct list
{
    char name[MAX_NAME];
    Item *itemList;
    struct list *next;
} List;
#endif //BQASSIGNMENT3_DEFINITIONS_H

