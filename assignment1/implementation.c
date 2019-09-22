//twwongbb:
#include "implementation.h"

Result getLargestConsecutiveChar(char *str)
{
    Result r;
    // implementation here
    #include <stdio.h>
    #include <string.h>
int main() {

    char a[100], chr;
    int i = 0,count = 1;
    int n1 = 1;
    printf("Enter a string : ");
    scanf("%s",a);
    chr = a[0];
    while ( i < strlen(a)-1 )
    {
        if ( a[i] == a[i+1] )
        {
            n1++;
            if ( n1 > count )
            {
                count = n1;
                chr = a[i];
            }
        }
        if ( a[i] != a[i+1] )
            n1 = 1;
        i++;
    }
    printf("%c %d\n", chr , count);
    return 0;
}
    return r;
}

