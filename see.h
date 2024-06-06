#ifndef SEE_H
#define SEE_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "commonstructs.h"

void see()
{
    int acc_no;
    int found = 0;

    if (num_accounts == 0)
    {
        printf("No accounts to display. Press any key to return to the main menu.");
        getch();
        menu();
    }

    printf("Enter the account number you want to display: ");
    scanf("%d", &acc_no);

    for (int i = 0; i < num_accounts; i++)
    {
        if (accounts[i].acc_no == acc_no)
        {
            found = 1;
            printf("\nAccount Information\n");
            printf("Account Number: %d\n", accounts[i].acc_no);
            printf("Name: %s\n", accounts[i].name);
            printf("Date of Birth: %d/%d/%d\n", accounts[i].dob.month, accounts[i].dob.day, accounts[i].dob.year);
            printf("Age: %d\n", accounts[i].age);
            printf("Address: %s\n", accounts[i].address);
            printf("Citizenship: %s\n", accounts[i].citizenship);
            printf("Phone: %.0lf\n", accounts[i].phone);
            printf("Account Type: %s\n", accounts[i].acc_type);
            printf("Balance: $%.2f\n", accounts[i].amt);
            printf("Date of Deposit: %d/%d/%d\n", accounts[i].deposit.month, accounts[i].deposit.day, accounts[i].deposit.year);
            printf("Press any key to return to the main menu.");
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
