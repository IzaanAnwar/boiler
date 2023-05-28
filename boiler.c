#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>


int main(void) {
    char destLocation[256] =  "/home/izaan/Projects/";
    char * fileLocation = malloc(128*sizeof(char));

    printf("Enter The Project Location: ");

    fgets(fileLocation, 128, stdin);
    strcat(destLocation,  fileLocation);
    free(fileLocation);

    FILE * boilerFile, * destFile;
    boilerFile = fopen("./btext.txt", "r");
    if (boilerFile == NULL) {
        printf("FAILED TO SRC OPEN FILE");
        return EXIT_FAILURE;
    }

    char dirPath[256];
    strcpy(dirPath, destLocation);
    char* lastSlash = strrchr(dirPath, '/');
     if (lastSlash != NULL) {
        *lastSlash = '\0';
    }

    int result = mkdir(dirPath, 0777);
     if (result != 0) {
        printf("Failed to create directory.\n");
        return EXIT_FAILURE;
    }

    destFile = fopen(destLocation, "w");
    if (destFile == NULL) {
        printf("FAILED TO OPEN DEST FILE");
        fclose(boilerFile);
        return EXIT_FAILURE;
    }

    int character;
    while ((character = fgetc(boilerFile)) != EOF) {
        fputc(character, destFile);
    }

    fclose(boilerFile);
    fclose(destFile);
}
