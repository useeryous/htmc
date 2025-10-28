#include "praser.h"

#include <stdio.h>

char ui_elements[];

const char html_tags[];
const char gtk_tags[];

//dont worry about this yet
const char css_tags[];
//

const char convertsion_table[][2] = {
    {"<div>", "<GtkBox>"},
    {"</div>", "</GtkBox>"},
    {"<span>", "<GtkLabel>"},
    {"</span>", "</GtkLabel>"},
    {"<button>", "<GtkButton>"},
    {"</button>", "</GtkButton>"},
    {"<input>", "<GtkEntry>"},
    {"</input>", "</GtkEntry>"}
};

const int html_tags_length[];
const int gtk_tags_length[];

//dont worry about this too
const int css_tags_length[];
//

char get_and_add_innertext(char innertext[]) {
    //get inner text from html and add to gtk element
    for (int i = 0; i < sizeof(innertext)/sizeof(innertext[0]); i++) {
        return innertext;
    }
}

char convert_tag(char tag[]) {
    //convert html tags to gtk tags
    for (int i = 0; i < sizeof(convertsion_table)/sizeof(convertsion_table[0]); i++) {
        //convert html tag to gtk tag
        if (tag == convertsion_table[i][0]) {
            return convertsion_table[i][1];
        } else {
            get_and_add_innertext(tag);
            return tag;
        }
    }
}

int check_tag(char **tag, int htl, int gtl, int i) {
    //check the html tag and see if it matches to a gtk tag
    check_html_tag(**tag, html_tags[htl]);
    if (htl[i] == gtl[i]) {
        return 1;
    } else {
        return 0;
    }
}

int check_gtk_tag(char **tag, char gt) {
    //check gtk tag to see if it compares to a gtk tag
    for (int i = 0; i < sizeof(tag)/sizeof(tag[0]); i++) {
        if (tag[i] == gt) {
            return 1;
        }
    }
    return 0;
}

int check_html_tag(char **tag, char ht) {
    //check html tag to see if it compares to a gtk tag
    for (int i = 0; i < sizeof(tag)/sizeof(tag[0]); i++) {
        if (tag[i] == ht) {
            return 1;
        }
    }
    return 0;
}

int add_tag(char *ue, char htl, char gtl) {
    //add the tag to the ui elements
    for (int i = 0; i < sizeof(ue)/sizeof(ue[0]); i++) {
        if (check_tag(&ue, htl, gtl, i)) {
            convert_tag(ue);
        }
    }
}

int read_ui_tags(FILE *fp, char *ue) {
    while (fgets(ue, 256, fp) != NULL) {
        add_tag(ue, html_tags_length, gtk_tags_length);
    }
}

int check_gtk_tag(char *uh, char ht, char ct, char gt) {
    //check html tag to see if it compares to a gtk tag
    for (int i = 0; i < sizeof(uh)/sizeof(uh[0]); i++) {

    }

    /* to-do fix csss
    //check css and styles
    for (int i = 0; i < sizeof(uh)/sizeof(uh[0]); i++) {

    }
    */
}

int add_ui_elements(FILE *fp) {
    // adds UI elements
    for (int i = 0; i < sizeof(ui_elements)/sizeof(ui_elements[0]); i++) {
        fprintf(fp, "    %s\n", ui_elements[i]);
    }
    
    return 0;
}