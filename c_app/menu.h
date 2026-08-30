#ifndef MENU_H__
#define MENU_H__

// Menu options mapped to integer values
typedef enum
{
    MENU_EXIT = 0,
    MENU_ANALYZE_RUN = 1,
    MENU_SELECT_RUN = 2,
    MENU_CONVERT_TO_TEXT = 3,
    MENU_CONVERT_TO_BINARY = 4
} MenuOption;

// Main interactive menu handler
int run_menu(void);

#endif
