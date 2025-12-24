// get custom config
// copy to regular config

#include <stdio.h>
#include "import.h"
#include <sys/stat.h>
#include <stdlib.h>

void importConf(char *username)
{
    // Worst C code ever

    char configPath[256];
    char copyPath[256];
    char pathToCopy[256];

    int c;
    printf("Path to custom global: \n");
    scanf("%s", copyPath);

    // limits the amount of characters writen to the same path as the string ig
    snprintf(configPath, sizeof(configPath), "/home/%s/.config/kdeglobals", username);
    snprintf(pathToCopy, sizeof(pathToCopy), "%s", copyPath);

    

    FILE *config = fopen(configPath , "w");

    if(!config)
    {
        printf("Failed to open or the file doesnt exist.");
        return;
        
    }

    FILE *copy = fopen(pathToCopy, "r");

    if(!copy)
    {
        printf("Failed to open or the file doesnt exist.");
        return;
    }

    while((c = fgetc(copy)) != EOF)
    {
        fputc(c, config);
    }

    fclose(config);
    fclose(copy);
    system("kquitapp5 plasmashell");
    system("plasmashell --replace &"); // restart plasma
    printf("Done");
}

void importDir(char *username)
{
    char script[256];
    snprintf(script, sizeof(script), "/bin/bash /home/%s/kustomize-backend/src/scripts/importDir.sh", username); // TODO: locate the scripts location and change here forgot this aswell very nice

    system(script);
}