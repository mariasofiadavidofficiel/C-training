/******************************************************************************

  given int acsii codes 72, 101, 108, 108, 111, print the characters.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int x;
    printf("enter ascii value: ");
    scanf("%d",&x);
    int y;
    printf("enter ascii value: ");
    scanf("%d",&y);
    int w;
    printf("enter ascii value: ");
    scanf("%d",&w);
    int z;
    printf("enter ascii value: ");
    scanf("%d",&z);
    printf("the ascii value of %d is %c\n", x ,x);
    printf("the ascii value of %d is %c\n", y ,y);
    printf("the ascii value of %d is %c\n", w ,w);
    printf("the ascii value of %d is %c\n", w ,w);
    printf("the ascii value of %d is %c\n", z ,z);
    printf("the result: %c%c%c%c%c\n", x ,y , w, w, z);
    return 0;
}
