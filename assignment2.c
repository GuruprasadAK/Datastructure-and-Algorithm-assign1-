//Write function to generate square of a number. Numbers comes from text file. Squared number should be written to another file
#include <stdio.h>
#include <stdlib.h>
int main()
{
 FILE *fp,*fp1;
 int i,sq=0;
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
fclose(fp);
fp1 = fopen("guru2.txt","w");
for(i= 0; i<6; i++)
{
 sq = array[i] * array[i];
fprintf(fp1,"%d\t",sq);
printf("%d\t",sq);
}
fclose(fp1);
return 0;
}
}
