#include <stdio.h>
#include "export.h"
#include "getUser.h"

void selectOption()
{
    char *username;
    username = getUser();

    int option;
    printf("Welcome to kustomize ! What would you want to do?\n");
    printf("1. Export Global Config file\n");

    scanf("%d" ,&option);

    if(option == 1)
    {
        int pathSelect;
        printf("Defult or custom path? 1 or 2");
        scanf("%d", &pathSelect);

        if(pathSelect == 1)
        {
            printf("Somethings happening..");
            exportConf(username);
        }

    }
}