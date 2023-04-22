#ifndef BQASSIGNMENT3_EDITBOARD_H
#define BQASSIGNMENT3_EDITBOARD_H
#include "definitions.h"

// editBoard.c
int edit_Board();
List *ScanL(List *head,char name[MAX_NAME]); //returns the pointer to previous List
List *InsertL(List *head,char name[MAX_NAME]); //Inserts List at end of Board
List *EditL(List *head,char input[MAX_NAME],char new[MAX_NAME]);
List *DeleteL(List *head,char name[MAX_NAME]); //Deletes List
#endif //BQASSIGNMENT3_EDITBOARD_H
