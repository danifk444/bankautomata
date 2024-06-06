#ifndef NEWACC_H
#define NEWACC_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "commonstructs.h"

void new_acc()
{
    num_accounts++;
    accounts = (struct account *)realloc(accounts, num_accounts * sizeof(struct account));

    int choice;

    printf("\t\t\t\xB2\xB2\xB2\ ADD RECORD  \xB2\xB2\xB2\xB2");
    printf("\n\n\nEnter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d", &accounts[num_accounts - 1].deposit.month, &accounts[num_accounts - 1].deposit.day,
          &accounts[num_accounts - 1].deposit.year);
    printf("\nEnter the account number:");
    scanf("%d", &accounts[num_accounts - 1].acc_no);

    for (int i = 0; i < num_accounts - 1; i++)
    {
        if (accounts[i].acc_no == accounts[num_accounts - 1].acc_no)
        {
            printf("Account no. already in use!");
            fordelay(1000000000);
            free(accounts);
            num_accounts--;
            menu();
        }
    }

    printf("\nEnter the name:");
    scanf("%s", accounts[num_accounts - 1].name);
    printf("\nEnter the date of birth(mm/dd/yyyy):");
    scanf("%d/%d/%d", &accounts[num_accounts - 1].dob.month, &accounts[num_accounts - 1].dob.day,
          &accounts[num_accounts - 1].dob.year);
    printf("\nEnter the age:");
    scanf("%d", &accounts[num_accounts - 1].age);
    printf("\nEnter the address:");
    scanf("%s", accounts[num_accounts - 1].address);
    printf("\nEnter the citizenship:");
    scanf("%s", accounts[num_accounts - 1].citizenship);
    printf("\nEnter the phone number: ");
    scanf("%lf", &accounts[num_accounts - 1].phone);
    printf("\nEnter the amount to deposit:$");
    scanf("%f", &accounts[num_accounts - 1].amt);
    printf("\nType of account:\n\t#Saving\n\t#Current\n\t#Fixed1(for 1 year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter your choice:");
    scanf("%s", accounts[num_accounts - 1].acc_type);

    update_accounts_file();

    printf("\nAccount created successfully!");

add_invalid:
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
        goto add_invalid;
    }
}

#endif

