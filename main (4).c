/******************************************************************************
Exercise 2-A: Formatted Table

Print a multiplication table for n=5 using nested loops and printf.
Align columns with %3d so the table is neat.
Expected (partial):
1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 3 ; i++){
        for (j = 1; j <= 5 ; j++){
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}