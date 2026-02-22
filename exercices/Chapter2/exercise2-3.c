#include <stdio.h>
#include <ctype.h>

/* htoi: convert hexadecimal string to integer */
int htoi(char s[])
{
    int i, n;
    
    i = 0;
    /* skip optional 0x or 0X prefix */
    if (s[i] == '0' && (s[i+1] == 'x' || s[i+1] == 'X'))
        i += 2;
    
    n = 0;
    /* convert each hex digit */
    while (s[i] != '\0') {
        n *= 16;
        
        if (s[i] >= '0' && s[i] <= '9')
            n += s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f')
            n += s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'F')
            n += s[i] - 'A' + 10;
        else
            break;  /* invalid character, stop conversion */
        
        i++;
    }
    
    return n;
}

int main()
{
    /* Test cases */
    printf("0x1A = %d\n", htoi("0x1A"));
    printf("0X2b = %d\n", htoi("0X2b"));
    printf("FF = %d\n", htoi("FF"));
    printf("1a3 = %d\n", htoi("1a3"));
    printf("0x0 = %d\n", htoi("0x0"));
    printf("0xDEADBEEF = %u\n", htoi("0xDEADBEEF"));
    
    return 0;
}
