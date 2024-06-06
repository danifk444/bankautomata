#ifndef VIEWLIST_H
#define VIEWLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "commonstructs.h"

void view_list()
{
    FILE *view;
    view = fopen("record.dat", "r");
    int test = 0;
    system("cls");
    printf("\nACC. NO.\tNAME\t\t\tADDRESS\t\t\tPHONE\n");

    for (int i = 0; i < num_accounts; i++)
    {
        printf("\n%6d\t %10s\t\t\t%10s\t\t%.0lf", accounts[i].acc_no, accounts[i].name, accounts[i].address,
               accounts[i].phone);
        test++;
    }

    fclose(view);
    if (test == 0)
    {
        system("cls");
        printf("\nNO RECORDS!!\n");
    }

view_list_invalid:
    printf("\n\nEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
        close();
    else
    {
        printf("\nInvalid!\a");
        goto view_list_invalid;
    }
}


#endif
