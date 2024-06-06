#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "debugmalloc.h"
#include "close.h"
#include "erase.h"
#include "fordelay.h"
#include "init.h"
#include "menu.h"
#include "newacc.h"
#include "see.h"
#include "transact.h"
#include "update.h"
#include "updinfo.h"
#include "viewlist.h"
#include "commonstructs.h"

int main() {

    FILE *ptr;
    ptr = fopen("record.dat", "r");

     if (ptr != NULL) {
        while (fscanf(ptr, "%*s") != EOF) {
            num_accounts++;
        }

        rewind(ptr);

    initialize_accounts();

    fclose(ptr);
     }
    menu();
    free(accounts);
    return 0;
}
