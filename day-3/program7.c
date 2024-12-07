//write a c program to print multiplication tables from 1 to 10
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
        {
            printf("multiplication table for %d:\n",i);
        for(j=1;j<=10;j++)
            printf("%dX%d=%d\n",i,j,i*j);
        }




}
