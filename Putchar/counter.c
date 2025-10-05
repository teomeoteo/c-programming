#include <stdio.h>

main() {
    short c = 0;
    while(getchar() != EOF) {
        ++c;
        printf("%hi\n", c);
    }
}
