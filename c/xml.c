#include "xml.h"

#include <stdio.h>
#include <string.h>

#include "praser.h"
#include "builder.h"

int makefile(char *filename) {

    char fileName[258];
    FILE *fp;

    snprintf(fileName, sizeof(fileName), "%s.ui", filename);

    fp = fopen(fileName, "w");
    if (fp == NULL) {
        printf("Error creating file: %s\n", fileName);
        return 1;
    }

    fprintf(fp, "<?xml version="1.0" encoding="UTF-8"?>\n");
    fprintf(fp, "<interface>\n");
    add_ui_elements(fp);
    fprintf(fp, "</interface>\n");

    fclose(fp);

    printf("File created successfully: %s\n", fileName);
    return 0;
}