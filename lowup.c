#include<stdio.h>
int man()
{
    char ch,ch1;
    printf("enter a charecter in lowercase: ");
    scanf("%c",&ch);
    ch1=ch-32;
    printf("%c in uppercase is %c",ch,ch1);
    
}