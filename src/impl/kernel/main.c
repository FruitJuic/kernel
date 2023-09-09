#include "print.h"
#include  "keyboard.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("Kernel succesfully loaded. ");
    print_str(keyboard_main());
    update_screen();
}