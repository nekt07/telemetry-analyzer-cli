#include "errors.h"
#include "menu.h"
#include <stdio.h>

int main(void)
{
    int is_running = 1;

    while (is_running)
    {
        int choice = run_menu();

        switch (choice)
        {
        case MENU_ANALYZE_RUN:
            printf("\n[Action] Analyzing run...\n");
            break;
        case MENU_SELECT_RUN:
            printf("\n[Action] Selecting run...\n");
            break;
        case MENU_CONVERT_TO_TEXT:
            printf("\n[Action] Converting binary data to text...\n");
            break;
        case MENU_CONVERT_TO_BINARY:
            printf("\n[Action] Converting text data to binary...\n");
            break;
        case MENU_EXIT:
            printf("\nExiting program. Goodbye!\n");
            is_running = 0;
            break;
        }
    }

    return 0;
}
