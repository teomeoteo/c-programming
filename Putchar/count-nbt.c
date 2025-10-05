#include <stdio.h>

main() {
    
    int c, n, b, t;
    n = b = t = 0;

    while((c = getchar()) != EOF) {
        if(c == '\n')
            ++n;
        else if(c == '\t')
            ++t;
        else if(c == ' ')
            ++b;
    }

    printf("Final Count of Tabs Blanks and Newlines\n");
    printf("Newlines: %d, Tabs: %d, Blanks: %d\n", n, t, b);

}
