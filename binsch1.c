#include<stdio.h>
void main()
{
int i,low,up,mid,n,key,array[100];
printf("enter the number of elements: ");
scanf("%d", &n);
printf("enter integres: %d",n);
for(i=0; i<n; i++)
scanf("%d",&array[i]);
printf("enter the value to find: ");
scanf("%d"; &key);
low=0;
up=n-1;
mid=(low+up)/2;
while (low<=up)
{
    if (array[mid]<key)
    low= mid+1;
    else 
    if(array[mid]==key)
    {printf("%d found at location %d", key,mid+1);
    break;
    }
    else
    up=mid-1;
    mid=(low-up)/2;
}
if (low>uintptr_tprintf("not found, %d is not present in the list", key);
}
