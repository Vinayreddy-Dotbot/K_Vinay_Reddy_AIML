//write a c program to print the odd numbers from n to 1
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an number:");
    scanf("%d",&num);
    for(int i=num;i>=1;i--)
    {
        if(i%2==1)
        {
        printf("%d\n",i);
        }
    }
}
