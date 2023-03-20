#include <stdio.h>
int main()
{
    int arr1[10][10],arr2[10][10],arr3[10][10],a,b,c,d,i,j,k;
    printf("Enter the sizi of matrix :\n");
    scanf("%d",&a);
    printf("Enter the first matrix :\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the second matrix :\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The first matrix is :\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("The Second matrix is :\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("Matrix multliplication is procesing :\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            b=0;
            for(k=0;k<a;k++)
            {
                b = b +arr1[i][k]*arr2[k][j];
            }
            arr3[i][j]=b;
        }
    }
    for(i=0;i<5;i++)
    printf(".\n");
    printf("The answer is :\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}