/******************************************************************************
PROJECT: Mini-Project 1: Simple Unit Converter CLI
Build a menu-driven unit converter that runs in a loop until the user quits.
Requirements:
• Menu: 1) Celsius→Fahrenheit 2) Km→Miles 3) Kg→Lbs 4) Quit
• Each option reads a float, converts, and prints the result
• The loop repeats until option 4 is selected
• Use a switch statement for the menu
• READ EACH LINE OF CODE BEFORE RUN
*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int user_input;
    printf("pick number (Menu: 1) Celsius→Fahrenheit 2) Km→Miles 3) Kg→Lbs 4) Quit): ");
    scanf("%d", &user_input);
    
    // celsius to fahrenheit
    if (user_input == 1){
        float c;
        printf("enter temperature (celsius): ");
        scanf("%f",&c);
        float f = (c * 9.0/5.0) + 32;
        printf("the temperature in fahrenheit is: %.2f\n", f);
    }
    
    // km to miles
    if (user_input == 2){
        float km;
        printf("enter distance (km): ");
        scanf("%f",&km);
        float m = km * 0.621371;
        printf("the distance in miles is: %.3f\n", m);
    }
    
    //kg to Lbs
    if (user_input == 3){
        float kg;
        printf("enter weight (kg): ");
        scanf("%f",&kg);
        float lbs = kg * 2.20462;
        printf("the weight in lbs is: %.3f\n", lbs);
    }
    
    if (user_input == 4){
        return 0;
    }
    
}