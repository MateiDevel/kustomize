#include <stdio.h>
#include <string.h>
#include "main.h"
#include "src/select.h"

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        if(strcmp(argv[i], "--version") == 0)
        {
            printf("kustomize-backend version: %s\n" , VERSION);
        }
    }

    selectOption();
}