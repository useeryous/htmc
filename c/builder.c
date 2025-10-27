#include <gtk/gtk.h>
#include "xml.h"


void build_ui(GtkBuilder *builder) {
    // Load the UI definition from a file
    gtk_builder_add_from_file(builder, UI_FILE, NULL);
    
    // You can add more UI building logic here if needed
}
