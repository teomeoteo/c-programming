#include <stdio.h>

main() {
    int c;
    int state = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            if (state == 1) {
                putchar('\n');
                state = 0;
            }
        }
        else {
            putchar(c);
            state = 1;
        }
    }
}
