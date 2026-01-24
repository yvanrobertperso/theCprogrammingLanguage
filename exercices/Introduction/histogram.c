#include <stdio.h>
/* print a histogram of the length of words in input*/

#define MAXWORD 40
int main() {
    int c, i, j, nc;
    int wl[MAXWORD]; /* word length counters */

    for (i = 0; i < MAXWORD; ++i)
        wl[i] = 0;
    nc = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') { /* word ended*/
            if (nc > 0 && nc < MAXWORD) 
                ++wl[nc];
            nc = 0;
        } else {
            ++nc;
        }
    }
    /* print the histogram horizontally */
    printf("\nWord Length Histogram:\n");
    for (i = 1; i < MAXWORD; ++i) {
        if (wl[i] > 0) {
            printf("%2d: ", i);
            for (j = 0; j < wl[i]; ++j)
                putchar('*');
            putchar('\n');
        }
    }
    /* print the histogram vertically */
    
    int max = 0;
    for (i = 1; i < MAXWORD; ++i) {
        if (wl[i] > max)
            max = wl[i];
    }  
    printf("\nVertical Histogram:\n");
    for (i = max; i > 0; --i) {
        for (j = 1; j < MAXWORD; ++j) {
            if (wl[j] >= i)
                printf(" * ");
            else
                printf("   ");
        }
        putchar('\n');
    }
    for (j = 1; j < MAXWORD; ++j)
        printf("%2d ", j);
    putchar('\n');  
    return 0;
}