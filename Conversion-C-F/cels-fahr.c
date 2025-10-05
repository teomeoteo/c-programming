#include <stdio.h>

main() {
    float cels, fahr;
    int lower, step, upper;

    lower = 0;
    step = 20;
    upper = 300;

    cels = upper;

    while (cels >= lower) {
        fahr = cels * 9/5 + 32;
        printf("%3.0f %5.1f\n", cels, fahr);
        cels = cels - step;
    }
}
