// include local lib
#include "editBoard.h"
// include necessary libs
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definitions.h" // include structs for linked list

// int function to edit board
// return 0 = back to main menu
int edit_Board()
{
    int choice;
    printf("1: Edit name of list\n2: Add new list\n3: Delete list\n4: Return to main menu\n");
    scanf(" %d", &choice);
    switch (choice)
    {
        case 1: // edit name
            // enter name of list to edit
            // error check; list does not exist, notify and return 0
            // enter new name for list
            break;
        case 2: // add new

            // enter name of new list
            break;
        case 3: // delete
            // enter name of list to delete
            // error check: list does not exist, notify and return 0;
            break;
        case 4: // main menu
            return 0;
        default: // error checking
            printf("Invalid entry.\n");
            break;
    }
}
List *ScanL(List *head,char name[MAX_NAME]){ // returns pointer of previous List
    List *prev,*curr;
    prev = head;
    curr = head->next;
    while(curr != NULL && strcmp(curr->name,name) != 0){
        prev = curr;
        curr = curr->next;
    }
    return prev;
}

List *InsertL(List *head,char name[MAX_NAME]){ // Inserts new List
    List *prev,*next,*new = (List*)malloc(sizeof(List));
    if(head == NULL){
        strcpy(new->name,name);
        new->next = NULL;
        return new;
    }else{
        prev = ScanL(head,new->name);
        next = prev->next;
        if(next == NULL || strcmp(next->name,new->name) != 0){
            strcpy(new->name,name);
            prev->next = new;
            new->next = next;
        }
        else{
            printf("List already exists.\n");
            free(new);
        }
    }
    return head;
}
List *EditL(List *head,char input[MAX_NAME], char new[MAX_NAME]){ // edits selected List
    List *prev = head,*next;
    if(strcmp(head->name,input) == 0){ //if entered name matches with the first List
        strcpy(head->name,new);
    }else{ //if entered name does not match with the first List
        prev = ScanL(head,input);
        next = prev->next;
        if(strcmp(next->name,input) == 0){
            strcpy(head->name,new);
        }
    }
}

List *DeleteL(List *head,char name[MAX_NAME]){ // Deletes selected List
    List *prev,*del;
    if(strcmp(head->name,name) == 0){
        del = head;
        head = head->next;
        free(del);
    } else{
        prev = ScanL(head,name);
        del = prev->next;
        if(del != NULL && strcmp(del->name,name) == 0){
            prev->next = del->next;
            free(del);
        }
        else{
            printf("List not found.\n");
        }
    }
    return head;
}
