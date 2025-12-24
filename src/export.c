#include <errno.h>
#include <stdio.h>
#include "export.h"
#include <stdlib.h>
#include <sys/stat.h>
#include "checkThemes.h"

void exportConf(char *username)
{
    char configPath[256];
    char copyPath[256];
    char dirPath[256];
    int c;

    // limits the amount of characters writen to the same path as the string ig
    snprintf(configPath, sizeof(configPath), "/home/%s/.config/kdeglobals", username);
    snprintf(dirPath, sizeof(dirPath), "/home/%s/Documents/kustomize", username);
    snprintf(copyPath, sizeof(copyPath), "%s/kdeglobals", dirPath);
    

    if(mkdir(dirPath, 0775) == -1)
    {
       if(errno != EEXIST)
       {
            printf("%s", copyPath);
            perror("mkdir failed");
            return;
       }
    }
    

    FILE *config = fopen(configPath , "r");

    if(!config)
    {
        printf("Failed to open or the file doesnt exist.");
        return;
        
    }

    FILE *copy = fopen(copyPath, "w");

    if(!copy)
    {
        printf("Failed to copy the file");
        return;
    }

    while((c = fgetc(config)) != EOF)
    {
        checkIfInstalled(config);
        fputc(c, copy);
    }

    fclose(config);
    fclose(copy);

    printf("Done");
    
}


void exportDir(char *username)
{
    char script[256];
    snprintf(script, sizeof(script), "/bin/bash /home/%s/kustomize-backend/src/scripts/copyDir.sh", username); // TODO: locate the scripts location and change here forgot this aswell very nice

    system(script);
}