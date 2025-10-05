#include <stdio.h>

main() {
    
    int c, n;
    n = 0;
    while((c = getchar()) != EOF) {
        if(c == '\n')
            ++n;
        printf("%d\n", n);
    }
}
