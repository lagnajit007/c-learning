/*#include<stdio.h>
void main(){  //if else statement to defyning a person is adult or not!
int age; //declaring a variabe of int type named age;
printf("enter age: "); //printing on screen to assign the user input;
scanf("%d",&age);  //allocating the address for the pre defiened variable age, and storing the value into it;
if (age>18){ //putting the condition that if the varable is less the 18......
    printf("adult");  // .........then it would print adult
}
else { // and if not.....
    printf("not adult");  //....then it would print not adult
    }
}
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Q2//

//18+ can drive, <18 not, 60+ can drive but test req., <21 drive and drink
#include<stdio.h>
void main()
{
    int age;
printf("enter age: ");

scanf("%d",&age);

if (age>18)
{ 
    printf("able to drive, and can drink");  
}
else if (age>60)
{
    /* code */printf("able to drive, but need to test"); 
}
else if (age<18)
{
    /* code */printf("not able to drive"); 
}

 
}
