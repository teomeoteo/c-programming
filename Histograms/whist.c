#include <stdio.h>

#define MAX_ARRAY_INDEX 20 

main() {
    int c;
    int charcount;
    int countlist[MAX_ARRAY_INDEX];
    int state;
    for(int i = 0; i < MAX_ARRAY_INDEX; ++i){
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
			if (charcount >= 1 && charcount <= MAX_ARRAY_INDEX) {
				++countlist[charcount-1];
            	charcount = 0;
            	state = 0;
			}
        }
    }

	printf("Word Length\t");
	printf("Distribution\n");
    for(int i = 0; i < MAX_ARRAY_INDEX; ++i){
		printf("%d", i+1);
		putchar('\t');
		putchar('\t');
        // printf("length %d words: %d\n", i+1, countlist[i]);
		for (int j = 0; j < countlist[i]; ++j) {
			putchar('|');
		}
		putchar('\n');
    }

}
