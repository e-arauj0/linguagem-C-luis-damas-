#include <stdio.h>

int main()
{
    unsigned short int n1 = 65000, n2 = 65300;
    printf("\tOverflow \n");
    printf("%hu", n1 + n2);

    return 0;
}