#include <stdio.h>
#include "export.h"
#include "getUser.h"
#include "import.h"

void selectOption()
{
    char *username;
    username = getUser();

    int option;
    printf("Welcome to kustomize ! What would you want to do?\n");
    printf("===============================================\n");
    printf("1. Export Global Config file\n");
    printf("2. Import Global Config file\n");
    printf("3. Copy entire config directory\n");
    printf("4. Import entire config directory\n");
    printf("===============================================\n");

    scanf("%d" ,&option);

    switch (option) 
    {
        
        case 1 : {

            // make code more organized here please 

            int pathSelect;
            printf("Defult or custom path? 1 or 2 : \n");
            scanf("%d", &pathSelect);

            switch (pathSelect) 
            {    
            case 1:
                printf("Somethings happening..\n");
                exportConf(username);
                break;
            }
            break;
        } 

        case 2 : 
        {
            // i think ill just do them shenanigans in the function so i wont parse the path to the function
            // idk what is better
            importConf(username);   
            break;
        }

        case 3:
        {
            exportDir(username);
            break;
        }
        
        case 4:
        {
            importDir(username);
            break;
        }
    }
}