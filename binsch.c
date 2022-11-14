#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5]= {10,20,30,40,50}, low=0,up=4,f=0,mid,item; //mid variable for finding the midddle positon of the array
    printf("Enter the searching Item: ");
    scanf("%d", &item); // input searching item into the program
    while (low<=up)
    {
       mid=(low+up)/2; // calculatring the middle point of our array
       if(a[mid]==item) // if the mid point of our array is equal to our searching item
       {                  //then  we get f=1 hence the programe will break*
        f=1;
        break;
       } 
       //if the condition false then...
       if(a[mid]<item) //  mid er value item er theke choto hole
       low=mid+1;      // tokon lower e middle er sathe +1 kore store korabo
       //or
       else
       up=mid-1; // up er sathe -1 kore vlue store hbe
    }
    if(f==1)
    printf("item found = %d",mid);
    else
    printf("not found");
}