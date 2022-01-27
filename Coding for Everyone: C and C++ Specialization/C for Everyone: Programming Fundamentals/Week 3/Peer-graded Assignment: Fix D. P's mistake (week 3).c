/*
    Written by: Santhosh K.M.R
    Written on: 26/01/2022
*/

/*
    The mistake in this given program is that instead of fabs() function which returns the absolute value of a floating-point number, Dr. P had used abs() function which returns the aboslute value of a int dataype. As we have used double data type here, we must only use fabs() function only.
*/

#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */

int main(void)
{
    double interval;
    int i, temp;

    for(i = 0; i <30; i++)
        {
            interval = i/10.0;

            printf("sin( %lf ) = %lf \n", interval, fabs(sin(interval))); 
        }


    printf("\n+++++++\n");

    return 0;
}
