#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("Ranges from standard headers <limits.h>:\n\n");
    
    /* char */
    printf("char:\n");
    printf("  signed char:   %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("  unsigned char: 0 to %u\n\n", UCHAR_MAX);
    
    /* short */
    printf("short:\n");
    printf("  signed short:   %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("  unsigned short: 0 to %u\n\n", USHRT_MAX);
    
    /* int */
    printf("int:\n");
    printf("  signed int:   %d to %d\n", INT_MIN, INT_MAX);
    printf("  unsigned int: 0 to %u\n\n", UINT_MAX);
    
    /* long */
    printf("long:\n");
    printf("  signed long:   %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("  unsigned long: 0 to %lu\n", ULONG_MAX);
    
    printf("\n----------------------------------------\n");
    printf("\nRanges computed manually:\n\n");

    /* char */
    signed char sc_min = -(1 << (sizeof(signed char) * 8 - 1));
    signed char sc_max = (1 << (sizeof(signed char) * 8 - 1)) - 1;
    unsigned char uc_max = (1U << (sizeof(unsigned char) * 8)) - 1;
    printf("char (computed):\n");
    printf("  signed char:   %d to %d\n", sc_min, sc_max);
    printf("  unsigned char: 0 to %u\n\n", uc_max);

    /* short */
    short sh_min = -(1 << (sizeof(short) * 8 - 1));
    short sh_max = (1 << (sizeof(short) * 8 - 1)) - 1;
    unsigned short ush_max = (1U << (sizeof(unsigned short) * 8)) - 1;
    printf("short (computed):\n");
    printf("  signed short:   %d to %d\n", sh_min, sh_max);
    printf("  unsigned short: 0 to %u\n\n", ush_max);

    /* int */
    int i_min = -(1 << (sizeof(int) * 8 - 1));
    int i_max = (1 << (sizeof(int) * 8 - 1)) - 1;
    unsigned int ui_max = (1U << (sizeof(unsigned int) * 8)) - 1;
    printf("int (computed):\n");
    printf("  signed int:   %d to %d\n", i_min, i_max);
    printf("  unsigned int: 0 to %u\n\n", ui_max);

    /* long */
    long l_min = -(1L << (sizeof(long) * 8 - 1));
    long l_max = (1L << (sizeof(long) * 8 - 1)) - 1;
    unsigned long ul_max = (1UL << (sizeof(unsigned long) * 8)) - 1;
    printf("long (computed):\n");
    printf("  signed long:   %ld to %ld\n", l_min, l_max);
    printf("  unsigned long: 0 to %lu\n", ul_max);

    return 0;
}