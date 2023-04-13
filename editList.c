#include "editList.h"
#include <stdio.h>

// int function to edit lists
// return 0 = return to main menu
int edit_List()
{
    // enter name of list to edit
    // error checking, list does not exist, notify and return 0
    int choice;
    printf("1: Edit an item\n2: Add a new item\n3: Delete an item\n4: Return to main menu\n");
    scanf(" %d", &choice);
    switch (choice)
    {
        case 1: // edit item
            // enter name of item
            // error check: item does not exist, notify and return 0
            // enter new name of item
            break;
        case 2: // add new item
            // enter name of new item
            break;
        case 3: // delete item
            // enter name of item to delete
            // error check: item does not exist, return 0
            break;
        case 4: // return to main menu
            return 0;
        default: // error checking
            printf("Invalid entry.\n");
            return 0;
    }
}
