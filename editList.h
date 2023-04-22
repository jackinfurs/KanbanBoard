#ifndef BQASSIGNMENT3_EDITLIST_H
#define BQASSIGNMENT3_EDITLIST_H
#include "definitions.h"

// editList.c
int edit_List();
Item *ScanI(Item *head,char name[MAX_NAME]); //returns the pointer to previous Item
Item *InsertI(Item *head,char name[MAX_NAME]); //Inserts Item at end of list
Item *EditI(Item *head,char input[MAX_NAME],char new[MAX_NAME]);
Item *DeleteI(Item *head,char name[MAX_NAME]); //Deletes Item

#endif //BQASSIGNMENT3_EDITLIST_H
