#include <stdio.h>
/* count characters in input; 2nd version */
int main() {
    double nc;  /* note: double, not long */
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);  /* note: %.0f, not %ld */
    return 0;
}
