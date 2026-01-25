#include <stdio.h>
/* print Fahrenheit-Celsius table using for loop */

#define LOWER 0      /* lower limit of temperature table */
#define UPPER 300    /* upper limit */
#define STEP 20      /* step size */

main()
{
    int fahr;

    printf("Fahrenheit\tCelsius\n");

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d\t\t %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}