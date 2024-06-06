#ifndef ERASE_H
#define ERASE_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "commonstructs.h"

void erase()
{
    int acc_no;
    int found = 0;

    if (num_accounts == 0)
    {
        printf("No accounts to erase. Press any key to return to the main menu.");
        getch();
        menu();
    }

    printf("Enter the account number you want to erase: ");
    scanf("%d", &acc_no);

    for (int i = 0; i < num_accounts; i++)
    {
        if (accounts[i].acc_no == acc_no)
        {
            found = 1;

            for (int j = i; j < num_accounts - 1; j++)
            {
                accounts[j] = accounts[j + 1];
            }
            num_accounts--;

            update_accounts_file();
            printf("Account erased successfully. Press any key to return to the main menu.");
            getch();
            menu();
        }
    }

    if (!found)
    {
        printf("Account not found. Press any key to return to the main menu.");
        getch();
        menu();
    }
}

#endif
