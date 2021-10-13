#include <stdio.h>
#include <stdlib.h>

int main()
{
 FILE *fp;
 int i,sum=0;
 int array[10];
 fp = fopen("guru1.txt","r");
 if(fp == NULL)
 {
    printf("File is not exist\n");
}
else
{
for(i= 0; i<6 ; i++)
{
    fscanf(fp,"%d",&array[i]);
}
for(i= 0; i<6; i++)
{
    sum = sum+(array[i]);
}
printf("%d",sum);
return 0;
}
}
