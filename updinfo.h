#ifndef UPDINFO_H
#define UPDINFO_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "commonstructs.h"

void update_info()
{
    int acc_no;
    int found = 0;

    if (num_accounts == 0)
    {
        printf("No accounts to update. Press any key to return to the main menu.");
        getch();
        menu();
    }

    printf("Enter the account number you want to update: ");
    scanf("%d", &acc_no);

    for (int i = 0; i < num_accounts; i++)
    {
        if (accounts[i].acc_no == acc_no)
        {
            found = 1;
            printf("Which information do you want to update?\n");
            printf("1. Address\n");
            printf("2. Phone Number\n");
            printf("3. Back to Main Menu\n");

            int choice;
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                printf("Enter the new address: ");
                scanf("%s", accounts[i].address);
                break;
            case 2:
                printf("Enter the new phone number: ");
                scanf("%lf", &accounts[i].phone);
                break;
            case 3:
                menu();
                break;
            default:
                printf("Invalid choice. Returning to the main menu.");
                menu();
                break;
            }
        }
    }

    if (!found)
    {
        printf("Account not found. Press any key to return to the main menu.");
        getch();
    }
    else
    {
        printf("Account information updated successfully. Press any key to return to the main menu.");
        getch();
    }

    menu();
}


#endif
