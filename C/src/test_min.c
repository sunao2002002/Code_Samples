#include <stdio.h>
#include <stdlib.h>

#include "macro_defines.h"

int main(void)
{
    int a = 2;
    int b = 3;
    printf("a = %d, b= %d\n", a, b);
    printf("min(a++, b++) = %d\n", MIN(a++, b++));
    printf("a = %d, b= %d\n", a, b);
    return 0;
}
