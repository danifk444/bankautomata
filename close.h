#ifndef CLOSE_H
#define CLOSE_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "commonstructs.h"

int main_exit;

void close_program()
{

    free(accounts);
    printf("Goodbye!");
    exit(0);
}

#endif
