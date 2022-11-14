#include<stdio.h>
void main()
{
    int m,n,x,y,c,d, A[10][10],B[10][10],sum[10][10];
    
    printf("enter the rows and column of 1st matrix: \n");
    scanf("%d%d",&m,&n);
    printf("enter the rows and column of 2nd matrix: \n");
    scanf("%d%d",&x,&y);
    if (m==x && n==y) // matrix addition er jonno martix gulor row to row & column to column equal hote hoi
    {
        printf("enter the elements of 1st matrix: \n");
        for (c=0;c<m; c++)
        for(d=0; d<n; d++)
        scanf("%d", &A[c][d]);

        printf("enter the elements of 2nd matrix: \n");
        for (c=0;c<m; c++)
        for(d=0; d<n; d++)
        scanf("%d", &B[c][d]);

        printf("sum of the the folowing matrices: \n");
        for(c=0;c<m; c++)
        {
        for(d=0; d<n; d++)
        {
        sum[c][d]= A[c][d]+B[c][d];
        printf("%d",sum[c][d]);
        }
    printf("%d",sum[c][d]);
        }
        printf("\n");
    }
    else
    printf("addition is not possible");
}