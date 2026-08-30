#include "menu.h"
#include <stdio.h>

// Clears leftover invalid characters from input buffer
static void clear_input_buffer(void)
{
    int character;
    while ((character = getchar()) != '\n' && character != EOF)
        ;
}

// Prints menu options to standard output
static void display_menu(void)
{
    printf("\n=== RUN ANALYZER MENU ===\n");
    printf("1. Analyze run statistics\n");
    printf("2. Select specific run\n");
    printf("3. Convert to text format\n");
    printf("4. Convert to binary format\n");
    printf("0. Exit application\n");
    printf("=========================\n");
}

// Reads and validates integer choice within given range
static int get_user_choice(int min_val, int max_val)
{
    int choice;
    printf("Enter choice [%d-%d]: ", min_val, max_val);

    if (scanf("%d", &choice) != 1)
    {
        clear_input_buffer();
        return -1;
    }

    clear_input_buffer();

    if (choice < min_val || choice > max_val)
    {
        return -1;
    }

    return choice;
}

// Displays menu repeatedly until valid option is returned
int run_menu(void)
{
    int choice = -1;

    while (choice == -1)
    {
        display_menu();
        choice = get_user_choice(0, 4);

        if (choice == -1)
        {
            printf("[Error] Invalid input. Please enter a valid option number.\n");
        }
    }

    return choice;
}
