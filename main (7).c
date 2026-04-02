/******************************************************************************
Exercise 3-A: FizzBuzz Extended
Classic FizzBuzz (1-100), but add: print 'Quant' for multiples of 7.
• Multiples of both 3 and 7: 'FizzQuant'
• Multiples of both 5 and 7: 'BuzzQuant'
This tests your logical operator order — be precise with else-if chains.

*******************************************************************************/

/******************************************************************************
Classic FizzBuzz          +       New additions
──────────────────────────────────────────────
Fizz, Buzz, FizzBuzz,     +    Quant, FizzQuant,
and the number                     BuzzQuant
*******************************************************************************/

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0) {
            printf("FizzBuzzQuant\n");
        } else if (i % 3 == 0 && i % 7 == 0) {
            printf("FizzQuant\n");
        } else if (i % 5 == 0 && i % 7 == 0) {
            printf("BuzzQuant\n");
        } else if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else if (i % 7 == 0) {
            printf("Quant\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}