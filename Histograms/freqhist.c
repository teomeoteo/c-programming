#include <stdio.h>

#define ARRAY_SIZE 256
#define PRINTABLE 32
main() {
    int c;
	int ascii[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; ++i) {
        ascii[i] = 0;
    }
	while((c = getchar()) != EOF) {
		++ascii[c];
	}
	printf("ASCII\t");
	printf("Distribution\n");
	for (int i = PRINTABLE; i < ARRAY_SIZE; ++i) {
		if (ascii[i] > 0) {
			printf("%c", i);
			putchar(' ');
			putchar(' ');
			putchar(' ');
			putchar(' ');
			putchar('\t');
			for (int k = 0; k < ascii[i]; ++k) {
				putchar('|');
			}
			putchar('\n');
		}
	}
}
