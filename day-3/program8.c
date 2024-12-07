//write a c program to print the reversed multiplication tabkles from 1 to n
#include<stdio.h>
int main()
{
    int i,j,num;
    printf("Enter an number:");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
        {
            printf("multiplication table for %d:\n",i);
        for(j=10;j>=1;j--)
            printf("%dX%d=%d\n",i,j,i*j);
        }




}

