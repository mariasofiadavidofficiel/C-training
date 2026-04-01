/******************************************************************************

  Print the ASCII values of: 'A', 'z', '0', ' ', '!'

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    char x;
    printf("enter symbole: ");
    scanf("%c",&x);
    printf("the ascii value of %c is %d\n", x ,x);
    return 0;
}
