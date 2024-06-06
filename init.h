#ifndef INIT_H
#define INIT_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "commonstructs.h"

void initialize_accounts()
{
    accounts = (struct account *)malloc(num_accounts * sizeof(struct account));
}

#endif
