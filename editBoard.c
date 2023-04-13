// include local lib
#include "editBoard.h"
// include necessary libs
#include <stdio.h>

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
