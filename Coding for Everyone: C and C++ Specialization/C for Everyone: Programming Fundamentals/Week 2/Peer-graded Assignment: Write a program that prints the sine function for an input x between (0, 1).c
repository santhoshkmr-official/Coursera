/*
    Written By: Santhosh K.M.R
    Written On: 23/01/2022
    Description: C program that prints the sine function for an input x between (0, 1).
*/

#include <conio.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    double Sine_value, input;

    printf("Please enter an input: \n");  
    scanf("%lf", &input);

    if(input>=0 && input<=1)    //If condition that checks whether the value of the input is between 0 and 1. If true then it will proceed with the conversion and will print the sine value, else it will ask the user to enter valid input
    {
        Sine_value = sin(input);    // This converts the input to it's corresponding sine value and store it in the variable Sine_value

        printf("The sin value of the input '%lf' is %lf", input, Sine_value);

        getch();
    }

    else
    {
        printf("Please enter a valid input between 0 and 1");
    }

    return 0;
}
