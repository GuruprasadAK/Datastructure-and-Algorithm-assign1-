//Text file contains ‘n’ numbers, one number per line. Write function to store the numbers in other file in reversed order.
//(Let as assume that source.txt contains 10, 25, 30, 35, 50. Then dest.txt should contain 50, 35, 30, 25, 10).
#include <stdio.h>
#include <stdlib.h>
int main()
{
 FILE *fp,*fp1;
 int i,count=0;
 int array[10];
 fp = fopen("guru1.txt","r");
 if(fp == NULL)
 {
    printf("File is not exist\n");
}
else
{
for(i=1 ; i<=6 ; i++)
{    count = count+1;
    fscanf(fp,"%d",&array[i]);
}
fclose(fp);
fp1 = fopen("guru2.txt","w");
for(int j=count; j>0; j--)
{
    fprintf(fp1,"%d",array[j]);
    printf("%d\t",array[j]);
}
   fclose(fp1);
    return 0;
}
}
