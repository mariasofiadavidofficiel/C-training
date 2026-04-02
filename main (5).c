/******************************************************************************
Exercise 2-B: Input Validation Loop
Ask the user to enter a number between 1 and 100.
Keep re-asking with scanf inside a while loop until they comply.
Print 'Valid input: X' when done.
This simulates real-world input sanitization.

expected:
Enter a number between 1 and 100: 0
Invalid, try again: 101
Invalid, try again: 4
Valid input: 4


What your code does:
Asks the user for a number between 1 and 100, 
keeps re-asking if the input is invalid, 
and prints the valid input once the user complies.

Mistakes you made:

Uninitialized variable — checking x in the while condition 
before scanf had ever given it a value. 
Same mistake as lbs = lbs in the last exercise.
Backwards loop condition — looping while input was valid instead of invalid.
scanf missing inside the loop — x never changed so the loop would have run forever.
printf("Valid input:") inside the loop — it belongs outside, after the loop exits.
&& vs || confusion — x < 1 && x > 100 is mathematically impossible. 
A number can't be both at the same time, so the loop would never run.


Watch out for next time:

Always initialize variables before using them in conditions.
Read your condition in plain English — "loop while invalid" not "loop while valid".
&& means both must be true, || means either can be true — choose based on the plain English meaning.
If the loop re-asks, scanf must be inside the loop otherwise the value never changes.


*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &x);
    
    while (x < 1 || x > 100){
        printf("Invalid, try again: ");
        scanf("%d", &x);
    }
    
    printf("Valid input: %d", x);
    return 0;
}
