#include "praser.h"

#include <stdio.h>

char ui_elements[];
char html_tags[];
char gtk_tags[];
char css_tags[];

int check_gtk_tag(char *uh, char ht, char ct, char gt) {
    //check html tag to see if it compares to a gtk tag
    for (int i = 0; i < sizeof(uh)/sizeof(uh[0]); i++) {

    }

    //check css and styles
    for (int i = 0; i < sizeof(uh)/sizeof(uh[0]); i++) {

    }

}

int add_ui_elements(FILE *fp) {
    // adds UI elements
    for (int i = 0; i < sizeof(ui_elements)/sizeof(ui_elements[0]); i++) {
        fprintf(fp, "    %s\n", ui_elements[i]);
    }
    
    return 0;
}