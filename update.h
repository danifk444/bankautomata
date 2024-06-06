#ifndef UPDATE_H
#define UPDATE_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "commonstructs.h"

void update_accounts_file()
{
    FILE *ptr;
    ptr = fopen("record.dat", "w");
    for (int i = 0; i < num_accounts; i++)
    {
        fprintf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", accounts[i].acc_no, accounts[i].name,
                accounts[i].dob.month, accounts[i].dob.day, accounts[i].dob.year, accounts[i].age, accounts[i].address,
                accounts[i].citizenship, accounts[i].phone, accounts[i].acc_type, accounts[i].amt,
                accounts[i].deposit.month, accounts[i].deposit.day, accounts[i].deposit.year);
    }
    fclose(ptr);
}

#endif
