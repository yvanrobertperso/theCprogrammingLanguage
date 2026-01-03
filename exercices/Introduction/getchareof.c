#include <stdio.h>
/* verify if getchar() != EOF is = or 1 */

int main()
{
    int c;

    printf("getchar() != EOF evaluates to: %d\n", (getchar() != EOF));
}