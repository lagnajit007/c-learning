// Celcius to Fahrenheit --> (C*1.8 or 9/5)+32#include<stdio.h>
#include<stdio.h>
void main()
{
float C; // taking C variable to define celcius
printf("C= "); // printing on screen to put the value
scanf("%f", &C); // allocating the address for the pre defiened variable C, and storing the value
printf("The temp. in F scale is: %f F", C*1.8+32); // calculating the formula using the rule and print through %f (coz it's a float value)


}