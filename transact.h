#ifndef TRANSACT_H
#define TRANSACT_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "commonstructs.h"

void transact()
{
    int choice;
    int acc_no;
    int found = 0;

    if (num_accounts == 0)
    {
        printf("No accounts for transactions. Press any key to return to the main menu.");
        getch();
        menu();
    }

    printf("Enter the account number for transactions: ");
    scanf("%d", &acc_no);

    for (int i = 0; i < num_accounts; i++)
    {
        if (accounts[i].acc_no == acc_no)
        {
            found = 1;
            printf("Choose the transaction type:\n");
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Transfer\n");
            printf("4. Back to Main Menu\n");

            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                printf("Enter the amount to deposit: $");
                scanf("%f", &accounts[i].amt);
                accounts[i].amt += accounts[i].amt;
                printf("Deposit successful!");
                    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
        close();
    else
    {
        printf("\nInvalid!\a");
        menu();
    }
            case 2:
                printf("Enter the amount to withdraw: $");
                scanf("%f", &accounts[i].amt);
                if (accounts[i].amt <= accounts[i].amt)
                {
                    printf("Withdrawal successful!");
                    accounts[i].amt -= accounts[i].amt;
                }
                else
                {
                    printf("Insufficient funds!");
                };
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
        close();
    else
    {
        printf("\nInvalid!\a");
        menu();
    }
            case 3:
            {
                if (num_accounts < 2)
                {
                     printf("\n\n\n\t\t Not enough accounts for transfer! Enter 1 to go to the main menu and 0 to exit:");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
        close();
    else
    {
        printf("\nInvalid!\a");
        menu();
    }
                }

                printf("Enter the target account number for transfer: ");
                int target_acc_no;
                scanf("%d", &target_acc_no);

                int target_found = 0;

                for (int j = 0; j < num_accounts; j++)
                {
                    if (accounts[j].acc_no == target_acc_no)
                    {
                        target_found = 1;
                        printf("Enter the amount to transfer: $");
                        float transfer_amt;
                        scanf("%f", &transfer_amt);

                        if (transfer_amt <= accounts[i].amt)
                        {
                            accounts[i].amt -= transfer_amt;
                            accounts[j].amt += transfer_amt;
                            printf("Transfer successful!");
                                printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
        close();
    else
    {
        printf("\nInvalid!\a");
        menu();
    }
                        }
                        else
                        {
                            printf("Insufficient funds!");
                                printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
        close();
    else
    {
        printf("\nInvalid!\a");
        menu();
    }
                        }
                    }
                }

                if (!target_found)
                {
                    printf("Target account not found!");
                        printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
        close();
    else
    {
        printf("\nInvalid!\a");
        menu();
    }
                }
            }
            case 4:
                menu();
            }
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
