/******************************************************************************
 ROJECT: Mini-Project 1: Simple Unit Converter CLI
Build a menu-driven unit converter that runs in a loop until the user quits.
Requirements:
• Menu: 1) Celsius→Fahrenheit 2) Km→Miles 3) Kg→Lbs 4) Quit
• Each option reads a float, converts, and prints the result
• The loop repeats until option 4 is selected
• Use a switch statement for the menu

Formulas:
miles = km * 0.621371
lbs = kg * 2.20462

Bonus: add Bytes→Kilobytes→Megabytes conversion
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int user_input;
    while(1){
        
        printf("pick number (Menu: 1) Celsius→Fahrenheit 2) Km→Miles 3) Kg→Lbs 4) Quit)): ");
        scanf("%d", &user_input);
        switch(user_input){
            // celsius to fahrenheit
            case 1:
            {
                float c;
                printf("enter temperature (celsius): ");
                scanf("%f",&c);
                float f = (c * 9.0/5.0) + 32;
                printf("the temperature in fahrenheit is: %.2f\n", f);
            }
            break;
            
            // km to miles
            case 2:
            {
                float km;
                printf("enter distance (km): ");
                scanf("%f",&km);
                float m = km * 0.621371;
                printf("the distance in miles is: %.3f\n", m);
            }
            break;
            
            //kg to Lbs
            case 3:
            {
                float kg;
                printf("enter weight (kg): ");
                scanf("%f",&kg);
                float lbs = kg * 2.20462;
                printf("the weight in lbs is: %.3f\n", lbs);
            }
            break;
            
            //quit
            case 4: printf("quit");exit(0);  
            
        }
        
    }
    return 0;
}
