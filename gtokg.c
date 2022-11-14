// g to Kg conversion
// g --> kg --> g/1000
/* 1kg = 1000g
or, 1000g = 1kg
or, g = 1/1000 kg */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void main()
{
    float g; // declaring variable g (nale amrra kaj ta kotbo ki niye.....jhurite aam rakte gele jhurita to lagbe age)
printf("Enter the value in g:  "); // value put, coz we want to convrt. kg --> g
scanf("%f", &g); // store the value on the allowcating location for the variable kg
//after that we need to show thw value in kg unit
printf("The value in Kg : %f Kg", g/1000); // calculating the whole thing throgh thr rule after the comma(,)...and print through  %f

}
