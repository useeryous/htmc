#include <stdio.h>

int add_ui_elements(FILE *fp) {
    // Example UI elements
    for (int i = 0; i < sizeof(ui_elements)/sizeof(ui_elements[0]); i++) {
        fprintf(fp, "    %s\n", ui_elements[i]);
    }
    
    return 0;
}