#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
int main()
{
    char ch[1000];

    FILE *file;
    int count = 0;

    //Opens a file in read mode
    file = fopen("guru2.txt","r");

    //Gets each character till end of file is reached
    while((fgets(ch,file)) != EOF)
        {
       if((strcmp(ch,"musk"))!= NULL)
       {

            count++;
    }
    }

    printf("Number of words present in given file: %d", count);
    fclose(file);

    return 0;
}*/
int main()
{
   char *str= "Musk";
	FILE *fp;
	//int line_num = 1;
	int find_result = 0;
	char temp[512];

	if((fp = fopen("maa.txt" ,"r")) == NULL)
        {
		return(-1);
	}

	while(fgets(temp,512, fp) != NULL) {
		if((strstr(temp, str)) != NULL) {
			//printf("A match found on line: %d\n", line_num);
			find_result++;
		}
		//line_num++;
	}
   printf("%d\n",find_result);
	if(find_result == 0) {
		printf("\nSorry, couldn't find a match.\n");
	}

	//Close the file if still open.
	if(fp) {
		fclose(fp);
	}
   	return(0);
}
