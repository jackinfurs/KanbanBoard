#include "editList.h"
#include "definitions.h" //include structs for linked list
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int function to edit lists
// return 0 = return to main menu
int edit_List()
{
    Item *head;
    // enter name of list to edit
    // error checking, list does not exist, notify and return 0
    int choice;
    char name[MAX_NAME];
    char input[MAX_NAME];
    printf("1: Edit an item\n2: Add a new item\n3: Delete an item\n4: Return to main menu\n");
    scanf(" %d", &choice);
    switch (choice)
    {
        case 1: // edit item
            // enter name of item
            printf("Enter name of item to edit:\n");
            scanf(" %[^\n]",input);
            printf("Enter new name for item:\n");
            scanf(" %[^\n]",name);
            EditI(head,input,name);
            // error check: item does not exist, notify and return 0
            // enter new name of item
            break;
        case 2: // add new item
            printf("Enter name for new item:\n");
            // enter name of new item
            scanf(" %[^\n]",name);
            InsertI(head,name);
            break;
        case 3: // delete item
            // enter name of item to delete
            printf("Enter name for item to delete:\n");
            scanf(" %[^\n]",name);
            DeleteI(head,name);
            // error check: item does not exist, return 0
            break;
        case 4: // return to main menu
            return 0;
        default: // error checking
            printf("Invalid entry.\n");
            return 0;
    }
}

Item *ScanI(Item *head,char name[MAX_NAME]){ // returns pointer of previous Item
    Item *prev,*curr;
    prev = head;
    curr = head->next;
    while(curr != NULL && strcmp(curr->name,name) != 0){
        prev = curr;
        curr = curr->next;
    }
    return prev;
}

Item *InsertI(Item *head,char name[MAX_NAME]){ // Inserts new Item
    Item *prev,*next,*new = (Item*)malloc(sizeof(Item));
    if(head == NULL){//if list is empty
        new->next = NULL;
        return new;
    }else{
        prev = ScanI(head,new->name);
        next = prev->next;
        if(next == NULL || strcmp(next->name,new->name) != 0){
            prev->next = new;
            new->next = next;
        }
        else{
            printf("Item already exists.\n");
            free(new);
        }
    }
    return head;
}
Item *EditI(Item *head,char input[MAX_NAME], char new[MAX_NAME]){
    Item *prev = head,*next;
    if(strcmp(head->name,input) == 0){ //if entered name matches with the first Item
    strcpy(head->name,new);
    }else{ //if entered name does not match with the first Item
        prev = ScanI(head,input);
        next = prev->next;
        if(strcmp(next->name,input) == 0){
            strcpy(head->name,new);
        }
    }
}

Item *DeleteI(Item *head,char name[MAX_NAME]){
    Item *prev,*del;
    if(strcmp(head->name,name) == 0){
        del = head;
        head = head->next;
        free(del);
    } else{
        prev = ScanI(head,name);
        del = prev->next;
        if(del != NULL && strcmp(del->name,name) == 0){
            prev->next = del->next;
            free(del);
        }
        else{
            printf("Item not found.\n");
        }
    }
    return head;
}
