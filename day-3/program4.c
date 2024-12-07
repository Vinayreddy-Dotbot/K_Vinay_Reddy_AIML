//write a c program to to read amount as input from the user and print number of notes required in indian currency dimension
#include<stdio.h>
int main()
{
    int amt;
    printf("Enter the amount:");
    scanf("%d",&amt);
    int notes[]={2000,500,200,100,50,20,10,5,2,1};
    int notecount[10]={0};
    for(int i=0;i<10;i++)
    {
        if(amt>=notes[i])
        {
            notecount[i]=amt/notes[i];
            amt=amt%notes[i];
        }
    }
    printf("number of notes required:\n");
    for(int i=0;i<10;i++)
        if(notecount[i]>0)
    {
        printf("rupees%d:%d\n",notes[i],notecount[i]);
    }
}
