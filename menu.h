#ifndef MENU_H
#define MENU_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "commonstructs.h"

void menu()
{
    int choice;
    system("cls");
    system("color A");
    printf("\n\n\t\t\t\tBANK MANAGEMENT SYSTEM");
    printf("\n\n\n\t\t\t\tWELCOME TO THE MAIN MENU");
    printf("\n\t\t\t1.Create new account");
    printf("\n\t\t\t2.Update information of existing account");
    printf("\n\t\t\t3.For transactions");
    printf("\n\t\t\t4.Check the details of existing account");
    printf("\n\t\t\t5.Removing existing account");
    printf("\n\t\t\t6.View customer's list");
    printf("\n\t\t\t7.Exit");
    printf("\n\n\n\n\n\t\t\t\t\tEnter your choice:");
    scanf("%d", &choice);

    system("cls");

    switch (choice)
    {
    case 1:
        new_acc();
        break;
    case 2:
        update_info();
        break;
    case 3:
        transact();
        break;
    case 4:
        see();
        break;
    case 5:
        erase();
        break;
    case 6:
        view_list();
        break;
    case 7:
        close_program();
        break;
    }
}

#endif
