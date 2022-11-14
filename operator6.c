#include<stdio.h>
void main()
// ------- logic Operator -----------> ! WITH ||
{
    printf("%d \n", !((4>3) || (6>2))); // statement true hoto tai output 1 hoto but ! op palte 0 dilo
    printf("%d \n", !((4>3) || (1>2))); // statement true hoto tai output 1 hoto but ! op palte 0 dilo
    printf("%d", !((4>5) || (5>9))); // statement false hoto tai output 0 hoto but ! op palte 1 dilo
}
/* 

T+T=F
T+F=F
F+T=F
F+F=T

*/