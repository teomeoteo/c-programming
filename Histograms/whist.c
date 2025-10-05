#include <stdio.h>

main() {
    int c;
    int charcount;
    int countlist[12];
    int state;
    for(int i = 0; i < 12; ++i){
        countlist[i] = 0;
    }
    charcount = 0;
    state = 0;
    while((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            ++charcount;
            state = 1;
        }

        else if (state == 1) {
            ++countlist[charcount];
            charcount = 0;
            state = 0;
        }
    }

    printf("---------Distribution-------------\n");
    for(int i = 0; i < 12; ++i){
        printf("length %d words: %d\n", i, countlist[i]);
    }

}
