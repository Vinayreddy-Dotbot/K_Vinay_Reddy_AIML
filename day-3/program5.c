//write a c program to print the multiplication table of n
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an number:");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
        printf("%dX%d=%d\n",num,i,num*i);
}
