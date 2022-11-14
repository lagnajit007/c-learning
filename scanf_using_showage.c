/* 1.....  to input something use ----> scanf("%d",&name of the variable which we need to store the following value);
 2.... %d dekhai je amra akta int type data type nicchi
3..... & = ampersand or an address of the variable, jeta memory the oi variable er name je block ache sekane 
given value ta store koriye debe*/



#include<stdio.h>
void main()
{
int age;
printf("enter age: ");  //machine e show korbe. akta age enter korlm
scanf("%d", & age);  // age variable take er address e store korbe, eta screen e show korbe na
printf("age is: %d",age);      /*age show korbe, je value ta ager line er jonno {scanf er jonno} store holo seta show korbe*/

}


